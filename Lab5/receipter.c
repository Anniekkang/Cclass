#include "receipter.h"
#include <stdio.h>
#include <time.h>

int add_item(const char* name, double price) {

	



}

void set_tip(double tip) 
{
	int c;
	c = getchar();

	if (c == EOF) {
		printf("causing error, plese write tip price again");
		return;
	}

	if (tip > 999.99) {
		printf("causing error, plese write tip price again");
		return;
	}

	printf("%f", tip);
	
	


}

void set_message(const char* message);

int print_receipt(const char* filename, time_t timestamp);

