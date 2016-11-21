#include <stdint.h>

#ifndef __UGUI_CONFIG_H
#define __UGUI_CONFIG_H

/* -------------------------------------------------------------------------------- */
/* -- CONFIG SECTION                                                             -- */
/* -------------------------------------------------------------------------------- */

//#define USE_MULTITASKING    

/* Enable color mode */
//#define USE_COLOR_RGB888   // RGB = 0xFF,0xFF,0xFF
#define USE_COLOR_RGB565   // RGB = 0bRRRRRGGGGGGBBBBB 



/* Enable needed fonts here */
//#define  USE_FONT_4X6
//#define  USE_FONT_5X8
//#define  USE_FONT_5X12
//#define  USE_FONT_6X8
//#define  USE_FONT_6X10
//#define  USE_FONT_7X12
//#define  USE_FONT_8X8
//#define  USE_FONT_8X12_CYRILLIC
//#define  USE_FONT_8X12
//#define  USE_FONT_8X12
//#define  USE_FONT_8X14
//#define  USE_FONT_10X16
//#define  USE_FONT_12X16
#define  USE_FONT_12X20
//#define  USE_FONT_16X26
//#define  USE_FONT_22X36
//#define  USE_FONT_24X40
//#define  USE_FONT_32X53

/* Specify platform-dependent integer types here */

#define __UG_FONT_DATA const
typedef uint8_t      UG_U8;
typedef int8_t       UG_S8;
typedef uint16_t     UG_U16;
typedef int16_t      UG_S16;
typedef uint32_t     UG_U32;
typedef int32_t      UG_S32;


/* Example for dsPIC33
typedef unsigned char         UG_U8;
typedef signed char           UG_S8;
typedef unsigned int          UG_U16;
typedef signed int            UG_S16;
typedef unsigned long int     UG_U32;
typedef signed long int       UG_S32;
*/

/* -------------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------------- */

/* Feature enablers */
#define USE_PRERENDER_EVENT
#define USE_POSTRENDER_EVENT



/* -------------------------------------------------------------------------------- */
/* -- �GUI FONTS                                                                 -- */
/* -- Source: http://www.mikrocontroller.net/user/show/benedikt                  -- */
/* -------------------------------------------------------------------------------- */
typedef enum
{
	FONT_TYPE_1BPP,
	FONT_TYPE_8BPP
} FONT_TYPE;

typedef struct
{
	unsigned char* p;
	FONT_TYPE font_type;
	UG_S16 char_width;
	UG_S16 char_height;
	UG_U16 start_char;
	UG_U16 end_char;
	UG_U8  *widths;
} UG_FONT;

#ifdef USE_FONT_4X6
extern const UG_FONT FONT_4X6;
#endif
#ifdef USE_FONT_5X8
extern const UG_FONT FONT_5X8;
#endif
#ifdef USE_FONT_5X12
extern const UG_FONT FONT_5X12;
#endif
#ifdef USE_FONT_6X8
extern const UG_FONT FONT_6X8;
#endif
#ifdef USE_FONT_6X10
extern const UG_FONT FONT_6X10;
#endif
#ifdef USE_FONT_7X12
extern const UG_FONT FONT_7X12;
#endif
#ifdef USE_FONT_8X8
extern const UG_FONT FONT_8X8;
#endif
#ifdef USE_FONT_8X12
extern const UG_FONT FONT_8X12;
#endif
#ifdef USE_FONT_8X12_CYRILLIC
extern const UG_FONT FONT_8X12;
#endif
#ifdef USE_FONT_8X14
extern const UG_FONT FONT_8X14;
#endif
#ifdef USE_FONT_10X16
extern const UG_FONT FONT_10X16;
#endif
#ifdef USE_FONT_12X16
extern const UG_FONT FONT_12X16;
#endif
#ifdef USE_FONT_12X20
extern const UG_FONT FONT_12X20;
#endif
#ifdef USE_FONT_16X26
extern const UG_FONT FONT_16X26;
#endif
#ifdef USE_FONT_22X36
extern const UG_FONT FONT_22X36;
#endif
#ifdef USE_FONT_24X40
extern const UG_FONT FONT_24X40;
#endif
#ifdef USE_FONT_32X53
extern const UG_FONT FONT_32X53;
#endif

/* -------------------------------------------------------------------------------- */
/* -- TYPEDEFS                                                                   -- */
/* -------------------------------------------------------------------------------- */
typedef struct S_OBJECT                               UG_OBJECT;
typedef struct S_WINDOW                               UG_WINDOW;
typedef UG_S8                                         UG_RESULT;
#ifdef USE_COLOR_RGB888
typedef UG_U32                                        UG_COLOR;
#endif
#ifdef USE_COLOR_RGB565
typedef UG_U16                                        UG_COLOR;
#endif
/* -------------------------------------------------------------------------------- */
/* -- DEFINES                                                                    -- */
/* -------------------------------------------------------------------------------- */
#ifndef NULL
#define NULL ((void*) 0)
#endif

/* Alignments */
#define ALIGN_H_LEFT                                  (1<<0)
#define ALIGN_H_CENTER                                (1<<1)
#define ALIGN_H_RIGHT                                 (1<<2)
#define ALIGN_V_TOP                                   (1<<3)
#define ALIGN_V_CENTER                                (1<<4)
#define ALIGN_V_BOTTOM                                (1<<5)
#define ALIGN_BOTTOM_RIGHT                            (ALIGN_V_BOTTOM|ALIGN_H_RIGHT)
#define ALIGN_BOTTOM_CENTER                           (ALIGN_V_BOTTOM|ALIGN_H_CENTER)
#define ALIGN_BOTTOM_LEFT                             (ALIGN_V_BOTTOM|ALIGN_H_LEFT)
#define ALIGN_CENTER_RIGHT                            (ALIGN_V_CENTER|ALIGN_H_RIGHT)
#define ALIGN_CENTER                                  (ALIGN_V_CENTER|ALIGN_H_CENTER)
#define ALIGN_CENTER_LEFT                             (ALIGN_V_CENTER|ALIGN_H_LEFT)
#define ALIGN_TOP_RIGHT                               (ALIGN_V_TOP|ALIGN_H_RIGHT)
#define ALIGN_TOP_CENTER                              (ALIGN_V_TOP|ALIGN_H_CENTER)
#define ALIGN_TOP_LEFT                                (ALIGN_V_TOP|ALIGN_H_LEFT)

/* Default IDs */
#define OBJ_ID_0                                      0
#define OBJ_ID_1                                      1
#define OBJ_ID_2                                      2
#define OBJ_ID_3                                      3
#define OBJ_ID_4                                      4
#define OBJ_ID_5                                      5
#define OBJ_ID_6                                      6
#define OBJ_ID_7                                      7
#define OBJ_ID_8                                      8
#define OBJ_ID_9                                      9
#define OBJ_ID_10                                     10
#define OBJ_ID_11                                     11
#define OBJ_ID_12                                     12
#define OBJ_ID_13                                     13
#define OBJ_ID_14                                     14
#define OBJ_ID_15                                     15
#define OBJ_ID_16                                     16
#define OBJ_ID_17                                     17
#define OBJ_ID_18                                     18
#define OBJ_ID_19                                     19

/* -------------------------------------------------------------------------------- */
/* -- FUNCTION RESULTS                                                           -- */
/* -------------------------------------------------------------------------------- */
#define UG_RESULT_FAIL                               -1
#define UG_RESULT_OK                                  0

/* -------------------------------------------------------------------------------- */
/* -- UNIVERSAL STRUCTURES                                                       -- */
/* -------------------------------------------------------------------------------- */
/* Area structure */
typedef struct
{
	UG_S16 xs;
	UG_S16 ys;
	UG_S16 xe;
	UG_S16 ye;
} UG_AREA;

/* Text structure */
typedef struct
{
	char* str;
	const UG_FONT* font;
	UG_AREA a;
	UG_COLOR fc;
	UG_COLOR bc;
	UG_U8 align;
	UG_S16 h_space;
	UG_S16 v_space;
} UG_TEXT;

/* -------------------------------------------------------------------------------- */
/* -- BITMAP                                                                     -- */
/* -------------------------------------------------------------------------------- */
typedef struct
{
	void* p;
	UG_U16 width;
	UG_U16 height;
	UG_U8 bpp;
	UG_U8 colors;
} UG_BMP;

#define BMP_BPP_1                                     (1<<0)
#define BMP_BPP_2                                     (1<<1)
#define BMP_BPP_4                                     (1<<2)
#define BMP_BPP_8                                     (1<<3)
#define BMP_BPP_16                                    (1<<4)
#define BMP_BPP_32                                    (1<<5)
#define BMP_RGB888                                    (1<<0)
#define BMP_RGB565                                    (1<<1)
#define BMP_RGB555                                    (1<<2)

///* -------------------------------------------------------------------------------- */
///* -- MESSAGE                                                                    -- */
///* -------------------------------------------------------------------------------- */
///* Message structure */
typedef struct
{
	UG_U8 type;
	UG_U8 id;
	UG_U8 sub_id;
	UG_U8 event;
	void* src;
} UG_MESSAGE;

/* Message types */
#define MSG_TYPE_NONE                                 0
#define MSG_TYPE_WINDOW                               1
#define MSG_TYPE_OBJECT                               2

/* -------------------------------------------------------------------------------- */
/* -- TOUCH                                                                      -- */
/* -------------------------------------------------------------------------------- */
/* Touch structure */
typedef struct
{
	UG_U8 state;
	UG_S16 xp;
	UG_S16 yp;
} UG_TOUCH;


#define TOUCH_STATE_PRESSED                           1
#define TOUCH_STATE_RELEASED                          0

/* -------------------------------------------------------------------------------- */
/* -- OBJECTS                                                                    -- */
/* -------------------------------------------------------------------------------- */
/* Object structure */
struct S_OBJECT
{
	UG_U8 state;                              /* object state                               */
	UG_U8 touch_state;                        /* object touch state                         */
	void(*update) (UG_WINDOW*, UG_OBJECT*);   /* pointer to object-specific update function */
	UG_AREA a_abs;                            /* absolute area of the object                */
	UG_AREA a_rel;                            /* relative area of the object                */
	UG_U8 type;                               /* object type                                */
	UG_U8 id;                                 /* object ID                                  */
	UG_U8 event;                              /* object-specific events                     */
	void* data;                               /* pointer to object-specific data            */
};

/* Currently supported objects */
#define OBJ_TYPE_NONE                                 0
#define OBJ_TYPE_BUTTON                               1
#define OBJ_TYPE_TEXTBOX                              2
#define OBJ_TYPE_IMAGE                                3
#define OBJ_TYPE_CHECKBOX                             4

/* Standard object events */
#define OBJ_EVENT_NONE                                0
#define OBJ_EVENT_CLICKED                             1
#ifdef USE_PRERENDER_EVENT
#define OBJ_EVENT_PRERENDER                           2
#endif
#ifdef USE_POSTRENDER_EVENT
#define OBJ_EVENT_POSTRENDER                          3
#endif
#define OBJ_EVENT_PRESSED                             4
#define OBJ_EVENT_RELEASED                            5


/* Object states */
#define OBJ_STATE_FREE                                (1<<0)
#define OBJ_STATE_VALID                               (1<<1)
#define OBJ_STATE_BUSY                                (1<<2)
#define OBJ_STATE_VISIBLE                             (1<<3)
#define OBJ_STATE_ENABLE                              (1<<4)
#define OBJ_STATE_UPDATE                              (1<<5)
#define OBJ_STATE_REDRAW                              (1<<6)
#define OBJ_STATE_TOUCH_ENABLE                        (1<<7)
#define OBJ_STATE_INIT                                (OBJ_STATE_FREE | OBJ_STATE_VALID)

/* Object touch states */
#define OBJ_TOUCH_STATE_CHANGED                       (1<<0)
#define OBJ_TOUCH_STATE_PRESSED_ON_OBJECT             (1<<1)
#define OBJ_TOUCH_STATE_PRESSED_OUTSIDE_OBJECT        (1<<2)
#define OBJ_TOUCH_STATE_RELEASED_ON_OBJECT            (1<<3)
#define OBJ_TOUCH_STATE_RELEASED_OUTSIDE_OBJECT       (1<<4)
#define OBJ_TOUCH_STATE_IS_PRESSED_ON_OBJECT          (1<<5)
#define OBJ_TOUCH_STATE_IS_PRESSED                    (1<<6)
#define OBJ_TOUCH_STATE_CLICK_ON_OBJECT               (1<<7)
#define OBJ_TOUCH_STATE_INIT                          0

/* -------------------------------------------------------------------------------- */
/* -- WINDOW                                                                     -- */
/* -------------------------------------------------------------------------------- */
/* Title structure */
typedef struct
{
	char* str;
	const UG_FONT* font;
	UG_S8 h_space;
	UG_S8 v_space;
	UG_U8 align;
	UG_COLOR fc;
	UG_COLOR bc;
	UG_COLOR ifc;
	UG_COLOR ibc;
	UG_U8 height;
} UG_TITLE;

/* Window structure */
struct S_WINDOW
{
	UG_U8 objcnt;
	UG_OBJECT* objlst;
	UG_U8 state;
	UG_COLOR fc;
	UG_COLOR bc;
	UG_S16 xs;
	UG_S16 ys;
	UG_S16 xe;
	UG_S16 ye;
	UG_U8 style;
	UG_TITLE title;
	void(*cb)(UG_MESSAGE*);
};

/* Window states */
#define WND_STATE_FREE                                (1<<0)
#define WND_STATE_VALID                               (1<<1)
#define WND_STATE_BUSY                                (1<<2)
#define WND_STATE_VISIBLE                             (1<<3)
#define WND_STATE_ENABLE                              (1<<4)
#define WND_STATE_UPDATE                              (1<<5)
#define WND_STATE_REDRAW_TITLE                        (1<<6)

/* Window styles */
#define WND_STYLE_2D                                  (0<<0)
#define WND_STYLE_3D                                  (1<<0)
#define WND_STYLE_HIDE_TITLE                          (0<<1)
#define WND_STYLE_SHOW_TITLE                          (1<<1)

/* -------------------------------------------------------------------------------- */
/* -- BUTTON OBJECT                                                              -- */
/* -------------------------------------------------------------------------------- */
/* Button structure */
typedef struct
{
	UG_U8 state;
	UG_U8 style;
	UG_COLOR fc;
	UG_COLOR bc;
	UG_COLOR afc;
	UG_COLOR abc;
	const UG_FONT* font;
	UG_U8 align;
	UG_S8 h_space;
	UG_S8 v_space;
	char* str;
}UG_BUTTON;

/* Default button IDs */
#define BTN_ID_0                                      OBJ_ID_0
#define BTN_ID_1                                      OBJ_ID_1
#define BTN_ID_2                                      OBJ_ID_2
#define BTN_ID_3                                      OBJ_ID_3
#define BTN_ID_4                                      OBJ_ID_4
#define BTN_ID_5                                      OBJ_ID_5
#define BTN_ID_6                                      OBJ_ID_6
#define BTN_ID_7                                      OBJ_ID_7
#define BTN_ID_8                                      OBJ_ID_8
#define BTN_ID_9                                      OBJ_ID_9
#define BTN_ID_10                                     OBJ_ID_10
#define BTN_ID_11                                     OBJ_ID_11
#define BTN_ID_12                                     OBJ_ID_12
#define BTN_ID_13                                     OBJ_ID_13
#define BTN_ID_14                                     OBJ_ID_14
#define BTN_ID_15                                     OBJ_ID_15
#define BTN_ID_16                                     OBJ_ID_16
#define BTN_ID_17                                     OBJ_ID_17
#define BTN_ID_18                                     OBJ_ID_18
#define BTN_ID_19                                     OBJ_ID_19

/* Button states */
#define BTN_STATE_RELEASED                            (0<<0)
#define BTN_STATE_PRESSED                             (1<<0)
#define BTN_STATE_ALWAYS_REDRAW                       (1<<1)

/* Button style */
#define BTN_STYLE_2D                                  (0<<0)
#define BTN_STYLE_3D                                  (1<<0)
#define BTN_STYLE_TOGGLE_COLORS                       (1<<1)
#define BTN_STYLE_USE_ALTERNATE_COLORS                (1<<2)
#define BTN_STYLE_NO_BORDERS                          (1<<3)
#define BTN_STYLE_NO_FILL                             (1<<4)

/* Button events */
#define BTN_EVENT_CLICKED                             OBJ_EVENT_CLICKED

/* -------------------------------------------------------------------------------- */
/* -- CHECKBOX OBJECT                                                            -- */
/* -------------------------------------------------------------------------------- */
/* Checkbox structure */
typedef struct
{
	UG_U8 state;
	UG_U8 style;
	UG_COLOR fc;
	UG_COLOR bc;
	UG_COLOR afc;
	UG_COLOR abc;
	const UG_FONT* font;
	UG_U8 align;
	UG_S8 h_space;
	UG_S8 v_space;
	char* str;
	UG_U8 checked;
}UG_CHECKBOX;

/* Default checkbox IDs */
#define CHB_ID_0                                      OBJ_ID_0
#define CHB_ID_1                                      OBJ_ID_1
#define CHB_ID_2                                      OBJ_ID_2
#define CHB_ID_3                                      OBJ_ID_3
#define CHB_ID_4                                      OBJ_ID_4
#define CHB_ID_5                                      OBJ_ID_5
#define CHB_ID_6                                      OBJ_ID_6
#define CHB_ID_7                                      OBJ_ID_7
#define CHB_ID_8                                      OBJ_ID_8
#define CHB_ID_9                                      OBJ_ID_9
#define CHB_ID_10                                     OBJ_ID_10
#define CHB_ID_11                                     OBJ_ID_11
#define CHB_ID_12                                     OBJ_ID_12
#define CHB_ID_13                                     OBJ_ID_13
#define CHB_ID_14                                     OBJ_ID_14
#define CHB_ID_15                                     OBJ_ID_15
#define CHB_ID_16                                     OBJ_ID_16
#define CHB_ID_17                                     OBJ_ID_17
#define CHB_ID_18                                     OBJ_ID_18
#define CHB_ID_19                                     OBJ_ID_19

/* Checkbox states */
#define CHB_STATE_RELEASED                            (0<<0)
#define CHB_STATE_PRESSED                             (1<<0)
#define CHB_STATE_ALWAYS_REDRAW                       (1<<1)

/* Checkbox style */
#define CHB_STYLE_2D                                  (0<<0)
#define CHB_STYLE_3D                                  (1<<0)
#define CHB_STYLE_TOGGLE_COLORS                       (1<<1)
#define CHB_STYLE_USE_ALTERNATE_COLORS                (1<<2)
#define CHB_STYLE_NO_BORDERS                          (1<<3)
#define CHB_STYLE_NO_FILL                             (1<<4)

/* Checkbox events */
#define CHB_EVENT_CLICKED                             OBJ_EVENT_CLICKED


/* -------------------------------------------------------------------------------- */
/* -- TEXTBOX OBJECT                                                             -- */
/* -------------------------------------------------------------------------------- */
/* Textbox structure */
typedef struct
{
	char* str;
	const UG_FONT* font;
	UG_U8 style;
	UG_COLOR fc;
	UG_COLOR bc;
	UG_U8 align;
	UG_S8 h_space;
	UG_S8 v_space;
} UG_TEXTBOX;

/* Default textbox IDs */
#define TXB_ID_0                                      OBJ_ID_0
#define TXB_ID_1                                      OBJ_ID_1
#define TXB_ID_2                                      OBJ_ID_2
#define TXB_ID_3                                      OBJ_ID_3
#define TXB_ID_4                                      OBJ_ID_4
#define TXB_ID_5                                      OBJ_ID_5
#define TXB_ID_6                                      OBJ_ID_6
#define TXB_ID_7                                      OBJ_ID_7
#define TXB_ID_8                                      OBJ_ID_8
#define TXB_ID_9                                      OBJ_ID_9
#define TXB_ID_10                                     OBJ_ID_10
#define TXB_ID_11                                     OBJ_ID_11
#define TXB_ID_12                                     OBJ_ID_12
#define TXB_ID_13                                     OBJ_ID_13
#define TXB_ID_14                                     OBJ_ID_14
#define TXB_ID_15                                     OBJ_ID_15
#define TXB_ID_16                                     OBJ_ID_16
#define TXB_ID_17                                     OBJ_ID_17
#define TXB_ID_18                                     OBJ_ID_18
#define TXB_ID_19                                     OBJ_ID_19

/* -------------------------------------------------------------------------------- */
/* -- IMAGE OBJECT                                                               -- */
/* -------------------------------------------------------------------------------- */
/* Image structure */
typedef struct
{
	void* img;
	UG_U8 type;
} UG_IMAGE;

/* Default image IDs */
#define IMG_ID_0                                      OBJ_ID_0
#define IMG_ID_1                                      OBJ_ID_1
#define IMG_ID_2                                      OBJ_ID_2
#define IMG_ID_3                                      OBJ_ID_3
#define IMG_ID_4                                      OBJ_ID_4
#define IMG_ID_5                                      OBJ_ID_5
#define IMG_ID_6                                      OBJ_ID_6
#define IMG_ID_7                                      OBJ_ID_7
#define IMG_ID_8                                      OBJ_ID_8
#define IMG_ID_9                                      OBJ_ID_9
#define IMG_ID_10                                     OBJ_ID_10
#define IMG_ID_11                                     OBJ_ID_11
#define IMG_ID_12                                     OBJ_ID_12
#define IMG_ID_13                                     OBJ_ID_13
#define IMG_ID_14                                     OBJ_ID_14
#define IMG_ID_15                                     OBJ_ID_15
#define IMG_ID_16                                     OBJ_ID_16
#define IMG_ID_17                                     OBJ_ID_17
#define IMG_ID_18                                     OBJ_ID_18
#define IMG_ID_19                                     OBJ_ID_19

/* Image types */
#define IMG_TYPE_BMP                                  (1<<0)

/* -------------------------------------------------------------------------------- */
/* -- �GUI DRIVER                                                                -- */
/* -------------------------------------------------------------------------------- */
typedef struct
{
	void* driver;
	UG_U8 state;
} UG_DRIVER;

#define DRIVER_REGISTERED                             (1<<0)
#define DRIVER_ENABLED                                (1<<1)

/* Supported drivers */
#define NUMBER_OF_DRIVERS                             3
#define DRIVER_DRAW_LINE                              0
#define DRIVER_FILL_FRAME                             1
#define DRIVER_FILL_AREA                              2

/* -------------------------------------------------------------------------------- */
/* -- �GUI CORE STRUCTURE                                                        -- */
/* -------------------------------------------------------------------------------- */
typedef struct
{
	void(*pset)(UG_S16, UG_S16, UG_COLOR);
	UG_S16 x_dim;
	UG_S16 y_dim;
	UG_TOUCH touch;
	UG_WINDOW* next_window;
	UG_WINDOW* active_window;
	UG_WINDOW* last_window;
	struct
	{
		UG_S16 x_pos;
		UG_S16 y_pos;
		UG_S16 x_start;
		UG_S16 y_start;
		UG_S16 x_end;
		UG_S16 y_end;
		UG_COLOR fore_color;
		UG_COLOR back_color;
	} console;
	UG_FONT font;
	UG_S8 char_h_space;
	UG_S8 char_v_space;
	UG_COLOR fore_color;
	UG_COLOR back_color;
	UG_COLOR desktop_color;
	UG_U8 state;
	UG_DRIVER driver[NUMBER_OF_DRIVERS];
} UG_GUI;

#define UG_SATUS_WAIT_FOR_UPDATE                      (1<<0)

/* -------------------------------------------------------------------------------- */
/* -- �GUI COLORS                                                                -- */
/* -- Source: http://www.rapidtables.com/web/color/RGB_Color.htm                 -- */
/* -------------------------------------------------------------------------------- */
#ifdef USE_COLOR_RGB565
#define C_MAROON                       0x8000
#define C_DARK_RED                     0x8800
#define C_BROWN                        0xA145
#define C_FIREBRICK                    0xB104
#define C_CRIMSON                      0xD8A7
#define C_RED                          0xF800
#define C_TOMATO                       0xFB09
#define C_CORAL                        0xFBEA
#define C_INDIAN_RED                   0xCAEB
#define C_LIGHT_CORAL                  0xEC10
#define C_DARK_SALMON                  0xE4AF
#define C_SALMON                       0xF40E
#define C_LIGHT_SALMON                 0xFD0F
#define C_ORANGE_RED                   0xFA20
#define C_DARK_ORANGE                  0xFC60
#define C_ORANGE                       0xFD20
#define C_GOLD                         0xFEA0
#define C_DARK_GOLDEN_ROD              0xB421
#define C_GOLDEN_ROD                   0xDD24
#define C_PALE_GOLDEN_ROD              0xEF35
#define C_DARK_KHAKI                   0xBDAD
#define C_KHAKI                        0xEF31
#define C_OLIVE                        0x8400
#define C_YELLOW                       0xFFE0
#define C_YELLOW_GREEN                 0x9E66
#define C_DARK_OLIVE_GREEN             0x5346
#define C_OLIVE_DRAB                   0x6C64
#define C_LAWN_GREEN                   0x7FC0
#define C_CHART_REUSE                  0x7FE0
#define C_GREEN_YELLOW                 0xAFE6
#define C_DARK_GREEN                   0x0320
#define C_GREEN                        0x07E0
#define C_FOREST_GREEN                 0x2444
#define C_LIME                         0x07E0
#define C_LIME_GREEN                   0x3666
#define C_LIGHT_GREEN                  0x9772
#define C_PALE_GREEN                   0x97D2
#define C_DARK_SEA_GREEN               0x8DD1
#define C_MEDIUM_SPRING_GREEN          0x07D3
#define C_SPRING_GREEN                 0x07EF
#define C_SEA_GREEN                    0x344B
#define C_MEDIUM_AQUA_MARINE           0x6675
#define C_MEDIUM_SEA_GREEN             0x3D8E
#define C_LIGHT_SEA_GREEN              0x2595
#define C_DARK_SLATE_GRAY              0x328A
#define C_TEAL                         0x0410
#define C_DARK_CYAN                    0x0451
#define C_AQUA                         0x07FF
#define C_CYAN                         0x07FF
#define C_LIGHT_CYAN                   0xDFFF
#define C_DARK_TURQUOISE               0x0679
#define C_TURQUOISE                    0x46F9
#define C_MEDIUM_TURQUOISE             0x4E99
#define C_PALE_TURQUOISE               0xAF7D
#define C_AQUA_MARINE                  0x7FFA
#define C_POWDER_BLUE                  0xAEFC
#define C_CADET_BLUE                   0x64F3
#define C_STEEL_BLUE                   0x4C16
#define C_CORN_FLOWER_BLUE             0x64BD
#define C_DEEP_SKY_BLUE                0x05FF
#define C_DODGER_BLUE                  0x249F
#define C_LIGHT_BLUE                   0xAEBC
#define C_SKY_BLUE                     0x867D
#define C_LIGHT_SKY_BLUE               0x867E
#define C_MIDNIGHT_BLUE                0x18CE
#define C_NAVY                         0x0010
#define C_DARK_BLUE                    0x0011
#define C_MEDIUM_BLUE                  0x0019
#define C_BLUE                         0x001F
#define C_ROYAL_BLUE                   0x435B
#define C_BLUE_VIOLET                  0x897B
#define C_INDIGO                       0x4810
#define C_DARK_SLATE_BLUE              0x49F1
#define C_SLATE_BLUE                   0x6AD9
#define C_MEDIUM_SLATE_BLUE            0x7B5D
#define C_MEDIUM_PURPLE                0x939B
#define C_DARK_MAGENTA                 0x8811
#define C_DARK_VIOLET                  0x901A
#define C_DARK_ORCHID                  0x9999
#define C_MEDIUM_ORCHID                0xBABA
#define C_PURPLE                       0x8010
#define C_THISTLE                      0xD5FA
#define C_PLUM                         0xDD1B
#define C_VIOLET                       0xEC1D
#define C_MAGENTA                      0xF81F
#define C_ORCHID                       0xDB9A
#define C_MEDIUM_VIOLET_RED            0xC0B0
#define C_PALE_VIOLET_RED              0xDB92
#define C_DEEP_PINK                    0xF8B2
#define C_HOT_PINK                     0xFB56
#define C_LIGHT_PINK                   0xFDB7
#define C_PINK                         0xFDF9
#define C_ANTIQUE_WHITE                0xF75A
#define C_BEIGE                        0xF7BB
#define C_BISQUE                       0xFF18
#define C_BLANCHED_ALMOND              0xFF59
#define C_WHEAT                        0xF6F6
#define C_CORN_SILK                    0xFFBB
#define C_LEMON_CHIFFON                0xFFD9
#define C_LIGHT_GOLDEN_ROD_YELLOW      0xF7DA
#define C_LIGHT_YELLOW                 0xFFFB
#define C_SADDLE_BROWN                 0x8A22
#define C_SIENNA                       0x9A85
#define C_CHOCOLATE                    0xD344
#define C_PERU                         0xCC28
#define C_SANDY_BROWN                  0xF52C
#define C_BURLY_WOOD                   0xDDB0
#define C_TAN                          0xD591
#define C_ROSY_BROWN                   0xBC71
#define C_MOCCASIN                     0xFF16
#define C_NAVAJO_WHITE                 0xFEF5
#define C_PEACH_PUFF                   0xFED6
#define C_MISTY_ROSE                   0xFF1B
#define C_LAVENDER_BLUSH               0xFF7E
#define C_LINEN                        0xF77C
#define C_OLD_LACE                     0xFFBC
#define C_PAPAYA_WHIP                  0xFF7A
#define C_SEA_SHELL                    0xFFBD
#define C_MINT_CREAM                   0xF7FE
#define C_SLATE_GRAY                   0x7412
#define C_LIGHT_SLATE_GRAY             0x7453
#define C_LIGHT_STEEL_BLUE             0xAE1B
#define C_LAVENDER                     0xE73E
#define C_FLORAL_WHITE                 0xFFDD
#define C_ALICE_BLUE                   0xEFBF
#define C_GHOST_WHITE                  0xF7BF
#define C_HONEYDEW                     0xEFFD
#define C_IVORY                        0xFFFD
#define C_AZURE                        0xEFFF
#define C_SNOW                         0xFFDE
#define C_BLACK                        0x0000
#define C_DIM_GRAY                     0x6B4D
#define C_GRAY                         0x8410
#define C_DARK_GRAY                    0xAD55
#define C_SILVER                       0xBDF7
#define C_LIGHT_GRAY                   0xD69A
#define C_GAINSBORO                    0xDEDB
#define C_WHITE_SMOKE                  0xF7BE
#define C_WHITE                        0xFFFF
#endif

#ifdef USE_COLOR_RGB888
#define  C_MAROON                     0x800000
#define  C_DARK_RED                   0x8B0000
#define  C_BROWN                      0xA52A2A
#define  C_FIREBRICK                  0xB22222
#define  C_CRIMSON                    0xDC143C
#define  C_RED                        0xFF0000
#define  C_TOMATO                     0xFF6347
#define  C_CORAL                      0xFF7F50
#define  C_INDIAN_RED                 0xCD5C5C
#define  C_LIGHT_CORAL                0xF08080
#define  C_DARK_SALMON                0xE9967A
#define  C_SALMON                     0xFA8072
#define  C_LIGHT_SALMON               0xFFA07A
#define  C_ORANGE_RED                 0xFF4500
#define  C_DARK_ORANGE                0xFF8C00
#define  C_ORANGE                     0xFFA500
#define  C_GOLD                       0xFFD700
#define  C_DARK_GOLDEN_ROD            0xB8860B
#define  C_GOLDEN_ROD                 0xDAA520
#define  C_PALE_GOLDEN_ROD            0xEEE8AA
#define  C_DARK_KHAKI                 0xBDB76B
#define  C_KHAKI                      0xF0E68C
#define  C_OLIVE                      0x808000
#define  C_YELLOW                     0xFFFF00
#define  C_YELLOW_GREEN               0x9ACD32
#define  C_DARK_OLIVE_GREEN           0x556B2F
#define  C_OLIVE_DRAB                 0x6B8E23
#define  C_LAWN_GREEN                 0x7CFC00
#define  C_CHART_REUSE                0x7FFF00
#define  C_GREEN_YELLOW               0xADFF2F
#define  C_DARK_GREEN                 0x006400
#define  C_GREEN                      0x00FF00
#define  C_FOREST_GREEN               0x228B22
#define  C_LIME                       0x00FF00
#define  C_LIME_GREEN                 0x32CD32
#define  C_LIGHT_GREEN                0x90EE90
#define  C_PALE_GREEN                 0x98FB98
#define  C_DARK_SEA_GREEN             0x8FBC8F
#define  C_MEDIUM_SPRING_GREEN        0x00FA9A
#define  C_SPRING_GREEN               0x00FF7F
#define  C_SEA_GREEN                  0x2E8B57
#define  C_MEDIUM_AQUA_MARINE         0x66CDAA
#define  C_MEDIUM_SEA_GREEN           0x3CB371
#define  C_LIGHT_SEA_GREEN            0x20B2AA
#define  C_DARK_SLATE_GRAY            0x2F4F4F
#define  C_TEAL                       0x008080
#define  C_DARK_CYAN                  0x008B8B
#define  C_AQUA                       0x00FFFF
#define  C_CYAN                       0x00FFFF
#define  C_LIGHT_CYAN                 0xE0FFFF
#define  C_DARK_TURQUOISE             0x00CED1
#define  C_TURQUOISE                  0x40E0D0
#define  C_MEDIUM_TURQUOISE           0x48D1CC
#define  C_PALE_TURQUOISE             0xAFEEEE
#define  C_AQUA_MARINE                0x7FFFD4
#define  C_POWDER_BLUE                0xB0E0E6
#define  C_CADET_BLUE                 0x5F9EA0
#define  C_STEEL_BLUE                 0x4682B4
#define  C_CORN_FLOWER_BLUE           0x6495ED
#define  C_DEEP_SKY_BLUE              0x00BFFF
#define  C_DODGER_BLUE                0x1E90FF
#define  C_LIGHT_BLUE                 0xADD8E6
#define  C_SKY_BLUE                   0x87CEEB
#define  C_LIGHT_SKY_BLUE             0x87CEFA
#define  C_MIDNIGHT_BLUE              0x191970
#define  C_NAVY                       0x000080
#define  C_DARK_BLUE                  0x00008B
#define  C_MEDIUM_BLUE                0x0000CD
#define  C_BLUE                       0x0000FF
#define  C_ROYAL_BLUE                 0x4169E1
#define  C_BLUE_VIOLET                0x8A2BE2
#define  C_INDIGO                     0x4B0082
#define  C_DARK_SLATE_BLUE            0x483D8B
#define  C_SLATE_BLUE                 0x6A5ACD
#define  C_MEDIUM_SLATE_BLUE          0x7B68EE
#define  C_MEDIUM_PURPLE              0x9370DB
#define  C_DARK_MAGENTA               0x8B008B
#define  C_DARK_VIOLET                0x9400D3
#define  C_DARK_ORCHID                0x9932CC
#define  C_MEDIUM_ORCHID              0xBA55D3
#define  C_PURPLE                     0x800080
#define  C_THISTLE                    0xD8BFD8
#define  C_PLUM                       0xDDA0DD
#define  C_VIOLET                     0xEE82EE
#define  C_MAGENTA                    0xFF00FF
#define  C_ORCHID                     0xDA70D6
#define  C_MEDIUM_VIOLET_RED          0xC71585
#define  C_PALE_VIOLET_RED            0xDB7093
#define  C_DEEP_PINK                  0xFF1493
#define  C_HOT_PINK                   0xFF69B4
#define  C_LIGHT_PINK                 0xFFB6C1
#define  C_PINK                       0xFFC0CB
#define  C_ANTIQUE_WHITE              0xFAEBD7
#define  C_BEIGE                      0xF5F5DC
#define  C_BISQUE                     0xFFE4C4
#define  C_BLANCHED_ALMOND            0xFFEBCD
#define  C_WHEAT                      0xF5DEB3
#define  C_CORN_SILK                  0xFFF8DC
#define  C_LEMON_CHIFFON              0xFFFACD
#define  C_LIGHT_GOLDEN_ROD_YELLOW    0xFAFAD2
#define  C_LIGHT_YELLOW               0xFFFFE0
#define  C_SADDLE_BROWN               0x8B4513
#define  C_SIENNA                     0xA0522D
#define  C_CHOCOLATE                  0xD2691E
#define  C_PERU                       0xCD853F
#define  C_SANDY_BROWN                0xF4A460
#define  C_BURLY_WOOD                 0xDEB887
#define  C_TAN                        0xD2B48C
#define  C_ROSY_BROWN                 0xBC8F8F
#define  C_MOCCASIN                   0xFFE4B5
#define  C_NAVAJO_WHITE               0xFFDEAD
#define  C_PEACH_PUFF                 0xFFDAB9
#define  C_MISTY_ROSE                 0xFFE4E1
#define  C_LAVENDER_BLUSH             0xFFF0F5
#define  C_LINEN                      0xFAF0E6
#define  C_OLD_LACE                   0xFDF5E6
#define  C_PAPAYA_WHIP                0xFFEFD5
#define  C_SEA_SHELL                  0xFFF5EE
#define  C_MINT_CREAM                 0xF5FFFA
#define  C_SLATE_GRAY                 0x708090
#define  C_LIGHT_SLATE_GRAY           0x778899
#define  C_LIGHT_STEEL_BLUE           0xB0C4DE
#define  C_LAVENDER                   0xE6E6FA
#define  C_FLORAL_WHITE               0xFFFAF0
#define  C_ALICE_BLUE                 0xF0F8FF
#define  C_GHOST_WHITE                0xF8F8FF
#define  C_HONEYDEW                   0xF0FFF0
#define  C_IVORY                      0xFFFFF0
#define  C_AZURE                      0xF0FFFF
#define  C_SNOW                       0xFFFAFA
#define  C_BLACK                      0x000000
#define  C_DIM_GRAY                   0x696969
#define  C_GRAY                       0x808080
#define  C_DARK_GRAY                  0xA9A9A9
#define  C_SILVER                     0xC0C0C0
#define  C_LIGHT_GRAY                 0xD3D3D3
#define  C_GAINSBORO                  0xDCDCDC
#define  C_WHITE_SMOKE                0xF5F5F5
#define  C_WHITE                      0xFFFFFF
#endif


#endif