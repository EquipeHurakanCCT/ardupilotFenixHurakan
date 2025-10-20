#pragma once

#include "defines.h"

#ifndef MAV_SYSTEM_ID
  #define MAV_SYSTEM_ID    1
#endif

//////////////////////////////////////////////////////////////////////////////
// Defaults for Fenix Parameters
//
#ifndef DEFAULT_TMP_CON
  #define DEFAULT_TMP_CON	0.0f
#endif

#ifndef DEFAULT_TMP_MTR
  #define DEFAULT_TMP_MTR	0.0f
#endif

#ifndef DEFAULT_V_BAR
  #define DEFAULT_V_BAR		0.0f
#endif

#ifndef DEFAULT_I_CON
  #define DEFAULT_I_CON		0.0f
#endif

#ifndef DEFAULT_RPM
  #define DEFAULT_RPM		0
#endif

#ifndef DEFAULT_ACC
  #define DEFAULT_ACC		0
#endif

#ifndef DEFAULT_FEN_AUX1
  #define DEFAULT_FEN_AUX1	0.0f
#endif

#ifndef DEFAULT_FEN_AUX2
  #define DEFAULT_FEN_AUX2	0.0f
#endif

#ifndef DEFAULT_FEN_AUX3
  #define DEFAULT_FEN_AUX3	0.0f
#endif

#ifndef DEFAULT_FEN_AUX4
  #define DEFAULT_FEN_AUX4	0
#endif

#ifndef DEFAULT_FEN_AUX5
  #define DEFAULT_FEN_AUX5	0
#endif

#ifndef DEFAULT_FEN_AUX6
  #define DEFAULT_FEN_AUX6	0
#endif

//////////////////////////////////////////////////////////////////////////////
// FrSky telemetry support
//

#ifndef CH7_OPTION
  #define CH7_OPTION CH7_SAVE_WP
#endif

//////////////////////////////////////////////////////////////////////////////
// MODE
// MODE_CHANNEL
//
#ifndef MODE_CHANNEL
  #define MODE_CHANNEL    8
#endif
#if (MODE_CHANNEL != 5) && (MODE_CHANNEL != 6) && (MODE_CHANNEL != 7) && (MODE_CHANNEL != 8)
  #error XXX
  #error XXX You must set MODE_CHANNEL to 5, 6, 7 or 8
  #error XXX
#endif

//////////////////////////////////////////////////////////////////////////////
// NAVL1
//
#ifndef NAVL1
  #define NAVL1_PERIOD    8
#endif

//////////////////////////////////////////////////////////////////////////////
// CRUISE_SPEED default
//
#ifndef CRUISE_SPEED
  #define CRUISE_SPEED    2  // in m/s
#endif

#define DEFAULT_LOG_BITMASK    0xffff

//////////////////////////////////////////////////////////////////////////////
// Dock mode - allows vehicle to dock to a docking target
#ifndef MODE_DOCK_ENABLED
# define MODE_DOCK_ENABLED AC_PRECLAND_ENABLED
#endif

//////////////////////////////////////////////////////////////////////////////
// Follow mode - allows vehicle to follow target
#ifndef MODE_FOLLOW_ENABLED
# define MODE_FOLLOW_ENABLED AP_FOLLOW_ENABLED
#endif


//////////////////////////////////////////////////////////////////////////////
// Developer Items
//

// if RESET_SWITCH_CH is not zero, then this is the PWM value on
// that channel where we reset the control mode to the current switch
// position (to for example return to switched mode after failsafe or
// fence breach)
#ifndef RESET_SWITCH_CHAN_PWM
  #define RESET_SWITCH_CHAN_PWM    1750
#endif

#ifndef AP_ROVER_ADVANCED_FAILSAFE_ENABLED
  #define AP_ROVER_ADVANCED_FAILSAFE_ENABLED 0
#endif

#ifndef AP_ROVER_AUTO_ARM_ONCE_ENABLED
#define AP_ROVER_AUTO_ARM_ONCE_ENABLED 1
#endif
