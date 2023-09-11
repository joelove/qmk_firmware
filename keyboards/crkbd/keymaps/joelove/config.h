#pragma once

#define EE_HANDS

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#undef TAPPING_TERM
#define TAPPING_TERM 200

#define SPLIT_WPM_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_LAYER_STATE_ENABLE

#define WPM_LAUNCH_CONTROL
#define NO_USB_STARTUP_CHECK

#define MOUSEKEY_INERTIA
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_MAX_SPEED 48
