#!/bin/sh

main_module_config_file="/home/nemo/.local/camera-module-main.conf"
front_module_config_file="/home/nemo/.local/camera-module-front.conf"

main_modules=( "ov8865_q8v18a" "ov12870" )
front_modules=( "ov2685" "ov5670" )

if [ ! -f "$main_module_config_file" -o ! -f "$front_module_config_file" ]
then
  main_module=""
  front_module=""
else
  main_module=`cat $main_module_config_file`
  front_module=`cat $front_module_config_file`
fi

detect_camera()
{
  local modules=("$@")
  local camera_detect_params=""
  for module in "${modules[@]}"
  do
    camera_detect_params+=" -e $module"
  done

  local found_module=`cat /sys/devices/fd8c0000.qcom,msm-cam/video4linux/*/name | grep $camera_detect_params`
  echo $found_module
}

found_main_module=$(detect_camera "${main_modules[@]}")
found_front_module=$(detect_camera "${front_modules[@]}")

if [ "$found_main_module" != "$main_module" -o "$found_front_module" != "$front_module" ]; then
  echo "Camera module changed. Updating camera configuration file"
  echo $found_main_module > $main_module_config_file
  echo $found_front_module > $front_module_config_file
  /usr/bin/droid-camres -platform hwcomposer -w /etc/dconf/db/vendor.d/jolla-camera-hw.txt
  touch /etc/dconf/db/vendor.d/
  dconf update
fi
