#include "em_int.h"
#include "em_chip.h"
#include "em_emu.h"
#include "em_cmu.h"
#include "em_letimer.h"
#include "em_device.h"
#include "em_rtc.h"
#include "em_timer.h"

#define DEFINED_EM sleepEM3

#define IDLE_OUT_0 0
#define IDLE_OUT_1 0
#define OFF_PERIOD 1.72
#define ON_PERIOD 0.03

/* Define the clock to be used */
//#define ULFRCO_CLK
#define LFXO_CLK

/* TIMER values; global variables */
//int timer0 = 0;
//int timer1 = 0;

void LETIMER_ClockSetup(void);

void Enable_LETIMER_Interrupt(void);

void LETIMER_Setup_Comparator(void);

void LETIMER_Setup_Counter(void);


