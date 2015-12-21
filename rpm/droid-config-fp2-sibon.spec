# These and other macros are documented in
# ../droid-configs-device/droid-configs.inc
%define device FP2
%define vendor fairphone_devices
%define rpm_device fp2-sibon    
%define rpm_vendor fairphone
%define vendor_pretty Fairphone
%define device_pretty Fairphone 2
%define dcd_path ./
# Adjust this for your device
%define pixel_ratio 2.0
# We assume most devices will
%define have_modem 1

Provides: sensord-configs

%include droid-configs-device/droid-configs.inc
