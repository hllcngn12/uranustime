#include "otherwin.h"

gx_win* WINDOW_PREFIX(_create_window)(gx_env* env){
printf("\nboo");
gx_win	*win =malloc(sizeof(gx_win));
win->title ="otherwin";
win->update =&WINDOW_PREFIX(_update);
return win;}

void WINDOW_PREFIX(_update)(gx_env* env){
printf("\notherwin update");
return;}


void WINDOW_PREFIX(_destroy)(void){
return;}
