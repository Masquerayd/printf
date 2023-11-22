#include "main.h"
#include <stdlib.h>


/**
 * funcsplit - chooses which function to use
 * @value: passed argument
 * @cha: spercifier
 */
int funcsplit(va_list value, char cha)
{
	char *string;
	int b = 0;

	string = malloc(10000);

	switch (cha)
	{
		case 'c':
			_printchar(va_arg(value, int));
			b = 1;
			break;
		case 'i':
		case 'd':
			intTstr(va_arg(value, int), string);
			b = printstr(string);
			break;
		case 's':
			b = printstr(va_arg(value , char *)) - 2;
	}
	free(string);
	return (b);
}
