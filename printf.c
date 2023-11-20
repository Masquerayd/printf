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
	char *string, temp;

	if (str == NULL)
	{
		return (0);
	}
	va_start(arg, str);
	string = (char *)malloc(10000 * sizeof(char));
	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] == '%')
		{
			c++;
			if (str[c] == 'c')
			{
				temp = va_arg(arg, int);
				funcsplit(temp, str[c]);
				b--;
			}
			if (str[c] == 's')
			{
				string = va_arg(arg, char *);
				b += printschec(string) - 2;
			}
			else if (str[c] == '%')
			{
				_printchar(str[c]);
				b--;
			}
		}
		else
		{
			_printchar(str[c]);
		}
	}
	return (c + b);
}
