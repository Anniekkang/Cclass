#ifndef RECEIPTER_H
#define RECEIPTER_H

#define TRUE (1)
#define FALSE (0)

int add_item(const char* name, double price);

void set_tip(double tip);

void set_message(const char* message);

int print_receipt(const char* filename, time_t timestamp);

#endif /* RECEIPTER_H */

