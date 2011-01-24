#ifndef USB_EXTRA_H
#define  USB_EXTRA_H 1
/*
 * Enhanced keyboard features for Windows:
 * Audio control and System control
 *
 * http://www.microsoft.com/whdc/archive/w2kbd.mspx
 */

#include <stdint.h>
#include "usb.h"


#define EXTRA_INTERFACE		3
#define EXTRA_ENDPOINT		4
#define EXTRA_SIZE		2
#define EXTRA_BUFFER		EP_DOUBLE_BUFFER


// Consumer Page(0x0C) Consumer Control(0x01)
#define AUDIO_VOL_UP		(1<<0)
#define AUDIO_VOL_DOWN		(1<<1)
#define AUDIO_MUTE		(1<<2)

// Generic Desktop Page(0x01) System Control(0x80)
#define SYSTEM_POWER_DOWN	(1<<0)
#define SYSTEM_SLEEP		(1<<1)
#define SYSTEM_WAKE_UP		(1<<2)


int8_t usb_extra_audio_send(uint8_t bits);
int8_t usb_extra_system_send(uint8_t bits);

#endif