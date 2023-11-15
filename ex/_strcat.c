#include <stdio.h>
#include "main.h"

char *_strcat(char *buffer, char *str)
{
	size_t buffer_len = _strlen(buffer);
	size_t str_len = _strlen(str);
	char temp;
	size_t i;

	for (i = 0 ; i < str_len && buffer[i] != '\0' ; i++)
	{
		temp = str[i];
		buffer[buffer_len + i] = temp;
	}
	buffer[buffer_len + i] = '\0';

	return buffer;
}


