%package -n patterns-sailfish-device-adaptation-fp2-sibon
Summary: Jolla HW Adaptation fp2-sibon
Requires: droid-hal-fp2-sibon
Requires: droid-hal-fp2-sibon-detritus
Requires: droid-hal-fp2-sibon-img-boot
Requires: droid-hal-fp2-sibon-kernel-modules
Requires: droid-config-fp2-sibon-sailfish
Requires: droid-config-fp2-sibon-pulseaudio-settings
Requires: droid-config-fp2-sibon-policy-settings
Requires: droid-config-fp2-sibon-preinit-plugin
Requires: droid-config-fp2-sibon-flashing
Requires: droid-config-fp2-sibon-bluez5
Requires: droid-hal-version-fp2-sibon

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: qt5-feedback-haptics-native-vibrator

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# For devices with droidmedia and gst-droid built, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: gmp-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded
Requires: usb-moded-defaults-android
Requires: usb-moded-developer-mode-android

# Extra useful modes not officially supported:
# might need some configuration to get working
#Requires: usb-moded-mass-storage-android-config
# working but careful with roaming!
Requires: usb-moded-connection-sharing-android-config
# android diag mode only usable for certain android tools
#Requires: usb-moded-diag-mode-android

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-daemon-encsfa

# For GPS
Requires: geoclue-provider-hybris

# For FM radio
Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
Requires: jolla-mediaplayer-radio

# for audio during calls
Requires: pulseaudio-modules-droid-glue

# Flashlight
Requires: jolla-settings-system-flashlight

# For camera module detection
Requires: droid-camres

%description -n patterns-sailfish-device-adaptation-fp2-sibon
Pattern with packages for fp2-sibon HW Adaptation

%files -n patterns-sailfish-device-adaptation-fp2-sibon
