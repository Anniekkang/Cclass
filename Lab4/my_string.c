#include <assert.h>
#include <string.h>
#include "my_string.h"


void reverse(char* str) 
{

size_t i;
size_t strCount(char* str);
size_t length = strCount(str);


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

if (length == 0)
{
	return (char *str);
}
else if (length % 2 == 0)
{
	(i=0; i<length; i++)
	{
		*str[i] = *str[length-1];
	}
	printf(char *str);
}
else 
{	
	(i=0; i<length; i++)
	{
		*str[i] = *str[length-1];
	}
	printf(char *str - char *str[(length-1)/2];	 

}	
}

int index_of(const char* str, const char* word) ;

void reverse_by_words(char* str);

char* tokenize(char* str_or_null, const char* delims);

char* reverse_tokenize(char* str_or_null, const char* delims);
