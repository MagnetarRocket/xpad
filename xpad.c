#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdbool.h>

#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#include <X11/StringDefs.h>
#include <X11/Xaw/Text.h>
#include <X11/Xaw/Viewport.h>
#include <X11/Xaw/Dialog.h>

#include "icons/pad.xbm"
#include "icons/pad_inv.xbm"
#include "global.h"

void act_quit()
{

}

int main(int argc, char *argv[])
{
	for (unsigned int i; i <= argc; i++) 
	{
		if('v')
		{

		}
	}
	
	Widget toplevel;

	toplevel = XtVaAppInitialize
	(
		&app_context,
		"XPad"
		
	);

	
}