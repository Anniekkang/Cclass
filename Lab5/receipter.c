#include "receipter.h"
#include <stdio.h>

int add_item(const char* name, double price)
{
	char* name;
	double price;
	char* eachfoodname[26];
	char* foodname[11];
	double eachfoodprice;
	int c;
	int d;

	eachfoodname = getchar(name);
	c = putchar(eachfoodname);
	if (c == EOF) {
		return false;
	}
	else {
		if (c / sizeof(c[0]) > 26) {
			return false;
		}
		return;
	}

	eachfoodprice = getchar(price);
	d = putchar(eachfoodprice);
	if (d == EOF) {
		return false;
	}
	else {
		if (eachfoodprice > 999.99) {
			return false;
		}
		return;
	}


	




	
}
void set_tip(double tip);

void set_message(const char* message);

int print_receipt(const char* filename, time_t timestamp);

