#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - prints strings and argument
 * @str: string
 * Return: amount of characters printed
 */
int _printf(const char *str, ...)
{
	int c, b = 0;
	va_list arg;
	specvalue *value;

	value = malloc(sizeof(specvalue));
	if (str == NULL)
	{	return (-1);
	}
	va_start(arg, str);
	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] == '%')
		{	c++;
			if (str[c] == 'c' || str[c] == 'i' || str[c] == 'd')
			{
				if (str[c] == 'c')
				{	value->cha = va_arg(arg, int);
				}
				else
				{	value->intvalue = va_arg(arg, int);
				}
				b += funcsplit(value, str[c]) - 1;
			} else if (str[c] == 's')
			{	value->str = va_arg(arg, char *);
				b += funcsplit(value, str[c]);
			} else if (str[c] == '%')
			{	_printchar(str[c]);
				b--;
			} else if (str[c] != '\0')
			{	_printchar('%');
				c--;
			} else if (str[c] == '\0')
			{	b = -3;
			}
		} else
		{	_printchar(str[c]);
		}
	}
	free(value);
	return (c + b);
}
