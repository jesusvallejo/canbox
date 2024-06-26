#ifndef CANBOX_H
#define CANBOX_H

#include <inttypes.h>

#ifdef __cplusplus
extern "C"
{
#endif

void canbox_process(void);

void canbox_inc_volume(uint8_t val);
void canbox_dec_volume(uint8_t val);
void canbox_prev(void);
void canbox_next(void);
void canbox_mode(void);
void canbox_cont(void);
void canbox_mici(void);
void canbox_pickup(void);
void canbox_hangup(void);
void canbox_nav_enter(void);
void canbox_nav_back(void);
void canbox_nav_up(void);
void canbox_nav_down(void);
void canbox_nav_left(void);
void canbox_nav_right(void);


void canbox_cmd_process(uint8_t ch);
void canbox_park_process(void);

#ifdef __cplusplus
}
#endif

#endif

