/*
 * TargetConfig.h
 *
 *  Created on: 28.04.2024
 *      Author: Rudolf
 */

#ifndef _TARGETCONFIG_H_
#define T_TARGETCONFIG_H_



//
// 10MHz XTAL on controlCARD.
//
#define DEVICE_OSCSRC_FREQ          10000000U

// 200 MHz
#define DEVICE_SYSCLK_FREQ          ((DEVICE_OSCSRC_FREQ * 40 * 1) / 2)


#endif /* _TARGETCONFIG_H_ */
