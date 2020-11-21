#ifndef HELPERS_AUDIO_H
#define HELPERS_AUDIO_H

#include <Arduino.h>


/********************************************************************************************\
   Generate a tone of specified frequency on pin
 \*********************************************************************************************/
bool tone_espEasy(uint8_t       _pin,
                  unsigned int  frequency,
                  unsigned long duration);

/********************************************************************************************\
   Play RTTTL string on specified pin
 \*********************************************************************************************/
void play_rtttl(uint8_t     _pin,
                const char *p);


#endif