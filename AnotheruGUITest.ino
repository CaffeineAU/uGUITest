#include <ugui_config.h>
#include <ILI9341_t3.h>
#include <font_ArialBold.h>
#include <font_Arial.h>

extern "C" {
#include <ugui.h>
};

#define TFT_RST 8
#define TFT_DC  9
#define TFT_CS 10

ILI9341_t3 tft = ILI9341_t3(TFT_CS, TFT_DC, TFT_RST);


void UserPixelSetFunction(UG_S16 x, UG_S16 y, UG_U16 c)
{
	tft.drawPixel(x, y, c);
}

UG_GUI gui;

#define MAX_OBJECTS 10


void setup()
{

  /* add setup code here */
	UG_Init(&gui, UserPixelSetFunction, 320, 240);
	tft.begin();
	tft.fillScreen(ILI9341_BLACK);


	Serial.begin(9600);
	UG_WINDOW window1;
	UG_BUTTON button1;
	UG_BUTTON button2;
	UG_BUTTON button3;
	UG_TEXTBOX textbox1;

	UG_OBJECT objbuffwnd1[MAX_OBJECTS];

	UG_WindowCreate(&window1, objbuffwnd1, MAX_OBJECTS, window1callback);

	//UG_WindowSetTitleText(&window1, "uGUI Demo Window");
	//UG_WindowSetTitleTextFont(&window1, &FONT_12X20);

	//UG_ButtonCreate(&window1, &button1, BTN_ID_0, 10, 10, 110, 60);
	//UG_ButtonCreate(&window1, &button2, BTN_ID_1, 10, 80, 110, 130);
	//UG_ButtonCreate(&window1, &button3, BTN_ID_2, 10, 150, 110, 200);
	//UG_ButtonSetFont(&window1, BTN_ID_0, &FONT_12X20);
	//UG_ButtonSetText(&window1, BTN_ID_0, "Button A");
	//UG_ButtonSetFont(&window1, BTN_ID_1, &FONT_12X20);
	//UG_ButtonSetText(&window1, BTN_ID_1, "Button B");
	//UG_ButtonSetFont(&window1, BTN_ID_2, &FONT_12X20);
	//UG_ButtonSetText(&window1, BTN_ID_2, "Button C");
	//UG_TextboxCreate(&window1, &textbox1, TXB_ID_0, 120, 10, 310, 200);
	//UG_TextboxSetFont(&window1, TXB_ID_0, &FONT_12X20);
	//UG_TextboxSetText(&window1, TXB_ID_0, "Test");
	//UG_TextboxSetForeColor(&window1, TXB_ID_0, C_GOLDEN_ROD);
	//UG_TextboxSetAlignment(&window1, TXB_ID_0, ALIGN_CENTER);

	Serial.println("Show window");
	Serial.println(UG_WindowShow(&window1));
	Serial.println("Height");
	Serial.println(UG_WindowGetTitleHeight(&window1));

	//UG_FillCircle(120, 160, 50, C_YELLOW_GREEN);	//UG_FillCircle(120, 160, 45, C_CADET_BLUE);
}


void loop()
{

}

void window1callback(UG_MESSAGE* msg)
{
	if(msg->type == MSG_TYPE_OBJECT)
	{
		if(msg->id == OBJ_TYPE_BUTTON)
		{
			switch(msg->sub_id)
			{
				case BTN_ID_0 :
				{
					// . . .
					break;
				}
				case BTN_ID_1:
				{
					// . . .
					break;
				}
				case BTN_ID_2:
				{
					// . . .
					break;
				}
			}
		}
	}
}


