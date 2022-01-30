#include <assert.h>
#include <string.h>
#include "my_string.h"

size_t strLength(char* str){
	size_t count = 0;
	char* p = str;
	while (*p != '\0'){
		++count;
	}
	return count;
}


void reverse(char* str)
{
	size_t i;

	if (strLength(str) == 0)
	{
		printf("%s", str);
	}
	else 
	{
		for (i=0; i< strLength(str); i++)
		{
			str[i] = str[strLength(str)-1-i];
		}
	}
}

int index_of(const char* str, const char* word);

void reverse_by_words(char* str);

char* tokenize(char* str_or_null, const char* delims);

char* reverse_tokenize(char* str_or_null, const char* delims);
