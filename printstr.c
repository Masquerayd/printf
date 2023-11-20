#include "main.h"

/**
 * printschec - prints and checks null
 * @string: string
 * Return: number of chars printed
 */
int printschec(char *string)
{
	int b = 0;

	if (string)
	{
		b += printstr(string);
	}
	else
	{
		b += printstr("null");
	}
	return (b);
}
