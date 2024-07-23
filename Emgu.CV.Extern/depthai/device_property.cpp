 
   #include "depthai/device_property.h"
bool cveDeviceIsUsb3(Device* obj) { return obj->is_usb3(); }   
     
bool cveDeviceIsEepromLoaded(Device* obj) { return obj->is_eeprom_loaded(); }   
     
bool cveDeviceIsRgbConnected(Device* obj) { return obj->is_rgb_connected(); }   
     
bool cveDeviceIsLeftConnected(Device* obj) { return obj->is_left_connected(); }   
     
bool cveDeviceIsRightConnected(Device* obj) { return obj->is_right_connected(); }   
      
  