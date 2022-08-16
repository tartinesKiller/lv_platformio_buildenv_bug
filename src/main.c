/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/

#define CONFIG_LV_FONT_DEFAULT &roboto14

#include "lvgl.h"
#include "app_hal.h"

#include "demos/lv_demos.h"

int main(void)
{
  int a = 2;
  int *b = TEST_AMP;

	lv_init();

	hal_setup();

  lv_demo_widgets();

	hal_loop();
}
