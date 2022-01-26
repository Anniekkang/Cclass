#include <assert.h>
#include <string.h>
#include "my_string.h"


void reverse(char* str) {
	size_t str_len ;
	char* str;


	size_t String_Length(char* string) 
	{ size_t count;
	 const char* p = string;
		while(*p++ != '\0') 
		{
			++count;
		} 
		
		return count;
	}

	size_t String_Length(char* str) = str_len;

	if (str_len == 0) 
	{
		return 0;
	}
	else if (str_len %2 == 0) 
	{ 	size_t i;
		for (i=1; i<= str_len; i++){
			*str[i/2 - 1] = *str[i/2];
			return *str;

		}


	}
	
}

int index_of(const char* str, const char* word) {







}

void reverse_by_words(char* str);

char* tokenize(char* str_or_null, const char* delims);

char* reverse_tokenize(char* str_or_null, const char* delims);
