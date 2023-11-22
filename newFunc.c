#include "main.h"
#include <stdlib.h>


/**
 * funcsplit - chooses which function to use
 * @value: passed argument
 * @cha: spercifier
 * Return: the num of characters printed
 */
int funcsplit(specvalue *value, char cha)
{
	char *string;
	int b = 0;

	string = malloc(10000);

	switch (cha)
	{
		case 'c':
			_printchar(value->cha);
			break;
		case 'i':
		case 'd':
			intTstr(value->intvalue, string);
			b = printstr(string);
			break;
		case 's':
			b = printschec(value->str) - 2;
			break;
	}
	free(string);
	return (b);
}
