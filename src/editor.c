#include "editor.h"

// Include oxygen
#include "oxygen/oxygen.h"

// Include sprites
#include "gfx/sprites.h"

#include <tice.h>
#include <graphx.h>
#include <keypadc.h>

void editor_RenderGUI(void)
{
    gfx_FillScreen(0x1d);
	
	gfx_SetColor(0x1c);
	oxy_FillIndentedRectangle_All(5, 24, 67, 214);
	oxy_FillIndentedRectangle_All(78, 24, 189, 192);
	
	// undo & redo
	oxy_FillIndentedRectangle_Bottom(144, 215, 50, 24);
	
	oxy_FillIndentedRectangle_All(274, 99, 37, 37);
	oxy_FillIndentedRectangle_All(272, 220, 45, 18);
	oxy_FillIndentedRectangle_All(269, 1, 49, 23);
	
	// items
	gfx_SetColor(0x74);
	oxy_FillIndentedRectangle_All(7, 28, 63, 186);
	
	gfx_SetColor(0x6a);
	oxy_FillIndentedRectangle_All(7, 28, 63, 186);
	oxy_FillIndentedRectangle_All(7, 28, 63, 186);
	
	gfx_SetColor(0x1c);
	oxy_FillIndentedRectangle_All(7, 216, 63, 10);
	oxy_FillIndentedRectangle_All(7, 227, 63, 10);
	
	// canvas
	gfx_SetColor(0);
	oxy_FillIndentedRectangle_All(81, 28, 182, 186);
	gfx_SetColor(255);
	oxy_IndentedRectangle_All(81, 28, 182, 186);
	gfx_Rectangle(83, 30, 18, 18);
	
	// color selector
	gfx_SetColor(0);
	oxy_FillIndentedRectangle_All(277, 102, 31, 31);
}
