#ifndef UI_INCLUDES_H
#define UI_INCLUDES_H





#include "ui/ui.h"

#include "res/resfile.h"
#include "res/font_ascii.h"



#define UI_TOUCH_DEBUG 0

#if (UI_TOUCH_DEBUG == 1)
#define UI_ONTOUCH_DEBUG printf
#else
#define UI_ONTOUCH_DEBUG(...)
#endif




#endif
