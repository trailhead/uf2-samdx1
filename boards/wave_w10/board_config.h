#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "WAVE DDS"
#define PRODUCT_NAME "w10"
#define VOLUME_LABEL "WAVEBOOT"
#define INDEX_URL "wavedds.com"
#define BOARD_ID "SAMD21G18A-Feather-M0-Express-v0"

#define USB_VID 0x239A
#define USB_PID 0x001B

#define LED_PIN PIN_PA02
//#define LED_PIN PIN_PB03

#define PCTL_PIN PIN_PB09

#define PCTL_INIT() PINOP(PCTL_PIN, DIRSET);

#define PCTL_ON() PINOP(PCTL_PIN, OUTSET)


#endif
