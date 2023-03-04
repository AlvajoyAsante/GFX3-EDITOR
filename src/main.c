/*
 *--------------------------------------
 * Program Name: GFX3E
 * Author: ALVAJOY ASANTE
 * License: AGPL v3.0
 * Description: A sprite stacking editor
 * "Please ask for permission before any use of Authors code!"
 *--------------------------------------
 */

#include <tice.h>
#include <graphx.h>
#include <keypadc.h>

// Include oxygen
#include "oxygen/oxygen.h"

// Include sprites
#include "gfx/sprites.h"

// Include bases
#include "editor.h"
#include "viewer.h"
#include "save.h"

int main(void)
{
    /* Initialize graphics drawing */
    gfx_Begin();

    /* Set the palette used by the sprites */
    gfx_SetPalette(global_palette, sizeof_global_palette, 0);

    /* Draw to buffer to avoid artifacts */
    gfx_SetDrawBuffer();

    /* Renders the GUI for the editor */
    editor_RenderGUI();

    /* Show the buffered screen */
    gfx_BlitBuffer();

    while (!os_GetCSC());

    /* End graphics drawing */
    gfx_End();

    return 0;
}