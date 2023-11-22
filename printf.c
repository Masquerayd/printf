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

	if (str == NULL)
	{
		return (-1);
	}
	va_start(arg, str);
	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] == '%')
		{
			c++;
			if (str[c] == 'c' || str[c] == 'i' || str[c] == 'd')
			{
				b = funcsplit(arg, str[c]) - 2;
			} else if (str[c] == 's')
			{
				b += funcsplit(arg, str[c]);
			} else if (str[c] == '%')
			{
				_printchar(str[c]);
				b--;
			} else if (str[c] != '\0')
			{
				_printchar('%');
				c--;
			} else
			{
			}
		} else
		{
			_printchar(str[c]);
		}
	}
	return (c + b);
}
