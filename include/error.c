#include "error.h"

void bsod(int error){
	clear_screen(0x1f);
	center_print("modrick has had a bad error and must restart",0x1f);
	printf("modrick error",0x1f);
	printf("\n\nError Code:",0x1f);
	printInt(error,0x1f);
	for(;;);
}

void bsodmsg(string message){
	clear_screen(0x1f);
	center_print("modrick has had a bad error and must restart",0x1f);
	printf("modrick error",0x1f);
	printf("\n\nError Code: ",0x1f);
	printf(message,0x1f);
	for(;;);
}
