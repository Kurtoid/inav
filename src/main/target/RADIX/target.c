/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"
#include "drivers/bus.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"

/* TIMERS */
const timerHardware_t timerHardware[] = {
    { TIM12, IO_TAG(PB14), TIM_Channel_1, 0, IOCFG_AF_PP_PD, GPIO_AF_TIM12, TIM_USE_PPM },
    { TIM5,  IO_TAG(PA2),  TIM_Channel_3, 1, IOCFG_AF_PP_PD, GPIO_AF_TIM5,  TIM_USE_MC_MOTOR }, // S3_OUT
    { TIM5,  IO_TAG(PA3),  TIM_Channel_4, 1, IOCFG_AF_PP_PD, GPIO_AF_TIM5,  TIM_USE_MC_MOTOR }, // S4_OUT
    { TIM1,  IO_TAG(PA10), TIM_Channel_3, 1, IOCFG_AF_PP_PD, GPIO_AF_TIM1,  TIM_USE_MC_MOTOR }, // S5_OUT
    { TIM2,  IO_TAG(PA15), TIM_Channel_1, 1, IOCFG_AF_PP_PD, GPIO_AF_TIM2,  TIM_USE_MC_MOTOR }, // S6_OUT
    { TIM8,  IO_TAG(PC8),  TIM_Channel_3, 1, IOCFG_AF_PP_PD, GPIO_AF_TIM8,  TIM_USE_MC_MOTOR }, // S5_OUT
    { TIM3,  IO_TAG(PB0),  TIM_Channel_3, 1, IOCFG_AF_PP_PD, GPIO_AF_TIM3,  TIM_USE_MC_MOTOR }, // S6_OUT
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
