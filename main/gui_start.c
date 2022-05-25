/**
 * @file lv_gifenc.c
*
*/

/*********************
*      INCLUDES
*********************/
#include "lvgl/lvgl.h"
#include "lv_conf.h"
#include "gui_start.h"

#if 1 /*GUI_START*/


/*********************
*      DEFINES
*********************/


/**********************
*      TYPEDEFS
**********************/


/**********************
*  STATIC PROTOTYPES
**********************/
static void start_gui_create(void);

/**********************
 *  STATIC VARIABLES
 **********************/


/**********************
 *      MACROS
 **********************/


 /**********************
  *   GLOBAL FUNCTIONS
  **********************/
void startup_create(void)
{
    start_gui_create();
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void start_gui_create(void)
{
    LV_IMG_DECLARE(astronaut);
    lv_obj_t* img;
    img = lv_gif_create(lv_scr_act());
    lv_gif_set_src(img, &astronaut);
    lv_obj_align(img, LV_ALIGN_LEFT_MID, 0, 0);
    //img = lv_gif_create(lv_scr_act());

}


#endif /*GUI_START*/
