#include <assert.h>
#include <string.h>
#include "my_string.h"

size_t strCount(char* str)
	{
 		size_t count = 0;
 		const char* P = str;
 		while(*P++ != '\0')
 		{
			++count;
 		}

 	return count;
	}


void reverse(char* str) 
{

size_t i;
size_t length = strCount(str);




if (length == 0)
{
	printf("%p",(void*)*str);
}
else 
{
	for (i=0; i<length; i++)
	{
		str[i] = str[length-1-i];
	}
	printf("%p",(void*)*str);
}
}

int index_of(const char* str, const char* word) ;

void reverse_by_words(char* str);

char* tokenize(char* str_or_null, const char* delims);

char* reverse_tokenize(char* str_or_null, const char* delims);
