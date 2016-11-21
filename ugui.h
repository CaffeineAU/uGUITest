/* -------------------------------------------------------------------------------- */
/* -- µGUI - Generic GUI module (C)Achim Döbler, 2015                            -- */
/* -------------------------------------------------------------------------------- */
// µGUI is a generic GUI module for embedded systems.
// This is a free software that is open for education, research and commercial
// developments under license policy of following terms.
//
//  Copyright (C) 2015, Achim Döbler, all rights reserved.
//  URL: http://www.embeddedlightning.com/
//
// * The µGUI module is a free software and there is NO WARRANTY.
// * No restriction on use. You can use, modify and redistribute it for
//   personal, non-profit or commercial products UNDER YOUR RESPONSIBILITY.
// * Redistributions of source code must retain the above copyright notice.
//
/* -------------------------------------------------------------------------------- */
#ifndef __UGUI_H
#define __UGUI_H

//#include "system.h"
#include "ugui_config.h"
//#include "Arduino.h"




/* -------------------------------------------------------------------------------- */
/* -- PROTOTYPES                                                                 -- */
/* -------------------------------------------------------------------------------- */
/* Classic functions */
UG_S16 UG_Init( UG_GUI* g, void (*p)(UG_S16,UG_S16,UG_COLOR), UG_S16 x, UG_S16 y );
UG_S16 UG_SelectGUI( UG_GUI* g );
void UG_FontSelect( const UG_FONT* font );
void UG_FillScreen( UG_COLOR c );
void UG_FillFrame( UG_S16 x1, UG_S16 y1, UG_S16 x2, UG_S16 y2, UG_COLOR c );
void UG_FillRoundFrame( UG_S16 x1, UG_S16 y1, UG_S16 x2, UG_S16 y2, UG_S16 r, UG_COLOR c );
void UG_DrawMesh( UG_S16 x1, UG_S16 y1, UG_S16 x2, UG_S16 y2, UG_COLOR c );
void UG_DrawFrame( UG_S16 x1, UG_S16 y1, UG_S16 x2, UG_S16 y2, UG_COLOR c );
void UG_DrawRoundFrame( UG_S16 x1, UG_S16 y1, UG_S16 x2, UG_S16 y2, UG_S16 r, UG_COLOR c );
void UG_DrawPixel( UG_S16 x0, UG_S16 y0, UG_COLOR c );
void UG_DrawCircle( UG_S16 x0, UG_S16 y0, UG_S16 r, UG_COLOR c );
void UG_FillCircle( UG_S16 x0, UG_S16 y0, UG_S16 r, UG_COLOR c );
void UG_DrawArc( UG_S16 x0, UG_S16 y0, UG_S16 r, UG_U8 s, UG_COLOR c );
void UG_DrawLine( UG_S16 x1, UG_S16 y1, UG_S16 x2, UG_S16 y2, UG_COLOR c );
void UG_PutString( UG_S16 x, UG_S16 y, char* str );
void UG_PutChar( char chr, UG_S16 x, UG_S16 y, UG_COLOR fc, UG_COLOR bc );
void UG_ConsolePutString( char* str );
void UG_ConsoleSetArea( UG_S16 xs, UG_S16 ys, UG_S16 xe, UG_S16 ye );
void UG_ConsoleSetForecolor( UG_COLOR c );
void UG_ConsoleSetBackcolor( UG_COLOR c );
void UG_SetForecolor( UG_COLOR c );
void UG_SetBackcolor( UG_COLOR c );
UG_S16 UG_GetXDim( void );
UG_S16 UG_GetYDim( void );
void UG_FontSetHSpace( UG_U16 s );
void UG_FontSetVSpace( UG_U16 s );

/* Miscellaneous functions */
void UG_WaitForUpdate( void );
void UG_Update( void );
void UG_DrawBMP( UG_S16 xp, UG_S16 yp, UG_BMP* bmp );
void UG_TouchUpdate( UG_S16 xp, UG_S16 yp, UG_U8 state );

/* Driver functions */
void UG_DriverRegister( UG_U8 type, void* driver );
void UG_DriverEnable( UG_U8 type );
void UG_DriverDisable( UG_U8 type );

/* Window functions */
UG_RESULT UG_WindowCreate( UG_WINDOW* wnd, UG_OBJECT* objlst, UG_U8 objcnt, void (*cb)( UG_MESSAGE* ) );
UG_RESULT UG_WindowDelete( UG_WINDOW* wnd );
UG_RESULT UG_WindowShow( UG_WINDOW* wnd );
UG_RESULT UG_WindowHide( UG_WINDOW* wnd );
UG_RESULT UG_WindowResize( UG_WINDOW* wnd, UG_S16 xs, UG_S16 ys, UG_S16 xe, UG_S16 ye );
UG_RESULT UG_WindowAlert( UG_WINDOW* wnd );
UG_RESULT UG_WindowSetForeColor( UG_WINDOW* wnd, UG_COLOR fc );
UG_RESULT UG_WindowSetBackColor( UG_WINDOW* wnd, UG_COLOR bc );
UG_RESULT UG_WindowSetTitleTextColor( UG_WINDOW* wnd, UG_COLOR c );
UG_RESULT UG_WindowSetTitleColor( UG_WINDOW* wnd, UG_COLOR c );
UG_RESULT UG_WindowSetTitleInactiveTextColor( UG_WINDOW* wnd, UG_COLOR c );
UG_RESULT UG_WindowSetTitleInactiveColor( UG_WINDOW* wnd, UG_COLOR c );
UG_RESULT UG_WindowSetTitleText( UG_WINDOW* wnd, char* str );
UG_RESULT UG_WindowSetTitleTextFont( UG_WINDOW* wnd, const UG_FONT* font );
UG_RESULT UG_WindowSetTitleTextHSpace( UG_WINDOW* wnd, UG_S8 hs );
UG_RESULT UG_WindowSetTitleTextVSpace( UG_WINDOW* wnd, UG_S8 vs );
UG_RESULT UG_WindowSetTitleTextAlignment( UG_WINDOW* wnd, UG_U8 align );
UG_RESULT UG_WindowSetTitleHeight( UG_WINDOW* wnd, UG_U8 height );
UG_RESULT UG_WindowSetXStart( UG_WINDOW* wnd, UG_S16 xs );
UG_RESULT UG_WindowSetYStart( UG_WINDOW* wnd, UG_S16 ys );
UG_RESULT UG_WindowSetXEnd( UG_WINDOW* wnd, UG_S16 xe );
UG_RESULT UG_WindowSetYEnd( UG_WINDOW* wnd, UG_S16 ye );
UG_RESULT UG_WindowSetStyle( UG_WINDOW* wnd, UG_U8 style );
UG_COLOR UG_WindowGetForeColor( UG_WINDOW* wnd );
UG_COLOR UG_WindowGetBackColor( UG_WINDOW* wnd );
UG_COLOR UG_WindowGetTitleTextColor( UG_WINDOW* wnd );
UG_COLOR UG_WindowGetTitleColor( UG_WINDOW* wnd );
UG_COLOR UG_WindowGetTitleInactiveTextColor( UG_WINDOW* wnd );
UG_COLOR UG_WindowGetTitleInactiveColor( UG_WINDOW* wnd );
char* UG_WindowGetTitleText( UG_WINDOW* wnd );
UG_FONT* UG_WindowGetTitleTextFont( UG_WINDOW* wnd );
UG_S8 UG_WindowGetTitleTextHSpace( UG_WINDOW* wnd );
UG_S8 UG_WindowGetTitleTextVSpace( UG_WINDOW* wnd );
UG_U8 UG_WindowGetTitleTextAlignment( UG_WINDOW* wnd );
UG_U8 UG_WindowGetTitleHeight( UG_WINDOW* wnd );
UG_S16 UG_WindowGetXStart( UG_WINDOW* wnd );
UG_S16 UG_WindowGetYStart( UG_WINDOW* wnd );
UG_S16 UG_WindowGetXEnd( UG_WINDOW* wnd );
UG_S16 UG_WindowGetYEnd( UG_WINDOW* wnd );
UG_U8 UG_WindowGetStyle( UG_WINDOW* wnd );
UG_RESULT UG_WindowGetArea( UG_WINDOW* wnd, UG_AREA* a );
UG_S16 UG_WindowGetInnerWidth( UG_WINDOW* wnd );
UG_S16 UG_WindowGetOuterWidth( UG_WINDOW* wnd );
UG_S16 UG_WindowGetInnerHeight( UG_WINDOW* wnd );
UG_S16 UG_WindowGetOuterHeight( UG_WINDOW* wnd );

/* Button functions */
UG_RESULT UG_ButtonCreate( UG_WINDOW* wnd, UG_BUTTON* btn, UG_U8 id, UG_S16 xs, UG_S16 ys, UG_S16 xe, UG_S16 ye );
UG_RESULT UG_ButtonDelete( UG_WINDOW* wnd, UG_U8 id );
UG_RESULT UG_ButtonShow( UG_WINDOW* wnd, UG_U8 id );
UG_RESULT UG_ButtonHide( UG_WINDOW* wnd, UG_U8 id );
UG_RESULT UG_ButtonSetForeColor( UG_WINDOW* wnd, UG_U8 id, UG_COLOR fc );
UG_RESULT UG_ButtonSetBackColor( UG_WINDOW* wnd, UG_U8 id, UG_COLOR bc );
UG_RESULT UG_ButtonSetAlternateForeColor( UG_WINDOW* wnd, UG_U8 id, UG_COLOR afc );
UG_RESULT UG_ButtonSetAlternateBackColor( UG_WINDOW* wnd, UG_U8 id, UG_COLOR abc );
UG_RESULT UG_ButtonSetText( UG_WINDOW* wnd, UG_U8 id, char* str );
UG_RESULT UG_ButtonSetFont( UG_WINDOW* wnd, UG_U8 id, const UG_FONT* font );
UG_RESULT UG_ButtonSetStyle( UG_WINDOW* wnd, UG_U8 id, UG_U8 style );
UG_RESULT UG_ButtonSetHSpace( UG_WINDOW* wnd, UG_U8 id, UG_S8 hs );
UG_RESULT UG_ButtonSetVSpace( UG_WINDOW* wnd, UG_U8 id, UG_S8 vs );
UG_RESULT UG_ButtonSetAlignment( UG_WINDOW* wnd, UG_U8 id, UG_U8 align );
UG_COLOR UG_ButtonGetForeColor( UG_WINDOW* wnd, UG_U8 id );
UG_COLOR UG_ButtonGetBackColor( UG_WINDOW* wnd, UG_U8 id );
UG_COLOR UG_ButtonGetAlternateForeColor( UG_WINDOW* wnd, UG_U8 id );
UG_COLOR UG_ButtonGetAlternateBackColor( UG_WINDOW* wnd, UG_U8 id );
char* UG_ButtonGetText( UG_WINDOW* wnd, UG_U8 id );
UG_FONT* UG_ButtonGetFont( UG_WINDOW* wnd, UG_U8 id );
UG_U8 UG_ButtonGetStyle( UG_WINDOW* wnd, UG_U8 id );
UG_S8 UG_ButtonGetHSpace( UG_WINDOW* wnd, UG_U8 id );
UG_S8 UG_ButtonGetVSpace( UG_WINDOW* wnd, UG_U8 id );
UG_U8 UG_ButtonGetAlignment( UG_WINDOW* wnd, UG_U8 id );

/* Checkbox functions */
UG_RESULT UG_CheckboxCreate( UG_WINDOW* wnd, UG_CHECKBOX* btn, UG_U8 id, UG_S16 xs, UG_S16 ys, UG_S16 xe, UG_S16 ye );
UG_RESULT UG_CheckboxDelete( UG_WINDOW* wnd, UG_U8 id );
UG_RESULT UG_CheckboxShow( UG_WINDOW* wnd, UG_U8 id );
UG_RESULT UG_CheckboxHide( UG_WINDOW* wnd, UG_U8 id );
UG_RESULT UG_CheckboxSetCheched( UG_WINDOW* wnd, UG_U8 id, UG_U8 ch );
UG_RESULT UG_CheckboxSetForeColor( UG_WINDOW* wnd, UG_U8 id, UG_COLOR fc );
UG_RESULT UG_CheckboxSetBackColor( UG_WINDOW* wnd, UG_U8 id, UG_COLOR bc );
UG_RESULT UG_CheckboxSetAlternateForeColor( UG_WINDOW* wnd, UG_U8 id, UG_COLOR afc );
UG_RESULT UG_CheckboxSetAlternateBackColor( UG_WINDOW* wnd, UG_U8 id, UG_COLOR abc );
UG_RESULT UG_CheckboxSetText( UG_WINDOW* wnd, UG_U8 id, char* str );
UG_RESULT UG_CheckboxSetFont( UG_WINDOW* wnd, UG_U8 id, const UG_FONT* font );
UG_RESULT UG_CheckboxSetStyle( UG_WINDOW* wnd, UG_U8 id, UG_U8 style );
UG_RESULT UG_CheckboxSetHSpace( UG_WINDOW* wnd, UG_U8 id, UG_S8 hs );
UG_RESULT UG_CheckboxSetVSpace( UG_WINDOW* wnd, UG_U8 id, UG_S8 vs );
UG_RESULT UG_CheckboxSetAlignment( UG_WINDOW* wnd, UG_U8 id, UG_U8 align );
UG_U8 UG_CheckboxGetChecked( UG_WINDOW* wnd, UG_U8 id );
UG_COLOR UG_CheckboxGetForeColor( UG_WINDOW* wnd, UG_U8 id );
UG_COLOR UG_CheckboxGetBackColor( UG_WINDOW* wnd, UG_U8 id );
UG_COLOR UG_CheckboxGetAlternateForeColor( UG_WINDOW* wnd, UG_U8 id );
UG_COLOR UG_CheckboxGetAlternateBackColor( UG_WINDOW* wnd, UG_U8 id );
char* UG_CheckboxGetText( UG_WINDOW* wnd, UG_U8 id );
UG_FONT* UG_CheckboxGetFont( UG_WINDOW* wnd, UG_U8 id );
UG_U8 UG_CheckboxGetStyle( UG_WINDOW* wnd, UG_U8 id );
UG_S8 UG_CheckboxGetHSpace( UG_WINDOW* wnd, UG_U8 id );
UG_S8 UG_CheckboxGetVSpace( UG_WINDOW* wnd, UG_U8 id );
UG_U8 UG_CheckboxGetAlignment( UG_WINDOW* wnd, UG_U8 id );

/* Textbox functions */
UG_RESULT UG_TextboxCreate( UG_WINDOW* wnd, UG_TEXTBOX* txb, UG_U8 id, UG_S16 xs, UG_S16 ys, UG_S16 xe, UG_S16 ye );
UG_RESULT UG_TextboxDelete( UG_WINDOW* wnd, UG_U8 id );
UG_RESULT UG_TextboxShow( UG_WINDOW* wnd, UG_U8 id );
UG_RESULT UG_TextboxHide( UG_WINDOW* wnd, UG_U8 id );
UG_RESULT UG_TextboxSetForeColor( UG_WINDOW* wnd, UG_U8 id, UG_COLOR fc );
UG_RESULT UG_TextboxSetBackColor( UG_WINDOW* wnd, UG_U8 id, UG_COLOR bc );
UG_RESULT UG_TextboxSetText( UG_WINDOW* wnd, UG_U8 id, char* str );
UG_RESULT UG_TextboxSetFont( UG_WINDOW* wnd, UG_U8 id, const UG_FONT* font );
UG_RESULT UG_TextboxSetHSpace( UG_WINDOW* wnd, UG_U8 id, UG_S8 hs );
UG_RESULT UG_TextboxSetVSpace( UG_WINDOW* wnd, UG_U8 id, UG_S8 vs );
UG_RESULT UG_TextboxSetAlignment( UG_WINDOW* wnd, UG_U8 id, UG_U8 align );
UG_COLOR UG_TextboxGetForeColor( UG_WINDOW* wnd, UG_U8 id );
UG_COLOR UG_TextboxGetBackColor( UG_WINDOW* wnd, UG_U8 id );
char* UG_TextboxGetText( UG_WINDOW* wnd, UG_U8 id );
UG_FONT* UG_TextboxGetFont( UG_WINDOW* wnd, UG_U8 id );
UG_S8 UG_TextboxGetHSpace( UG_WINDOW* wnd, UG_U8 id );
UG_S8 UG_TextboxGetVSpace( UG_WINDOW* wnd, UG_U8 id );
UG_U8 UG_TextboxGetAlignment( UG_WINDOW* wnd, UG_U8 id );

/* Image functions */
UG_RESULT UG_ImageCreate( UG_WINDOW* wnd, UG_IMAGE* img, UG_U8 id, UG_S16 xs, UG_S16 ys, UG_S16 xe, UG_S16 ye );
UG_RESULT UG_ImageDelete( UG_WINDOW* wnd, UG_U8 id );
UG_RESULT UG_ImageShow( UG_WINDOW* wnd, UG_U8 id );
UG_RESULT UG_ImageHide( UG_WINDOW* wnd, UG_U8 id );
UG_RESULT UG_ImageSetBMP( UG_WINDOW* wnd, UG_U8 id, const UG_BMP* bmp );



#endif
