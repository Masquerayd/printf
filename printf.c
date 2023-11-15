#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints strings and argument
 * @str: string
 * Return: amount of characters printed
 */
int _printf(const char *str, ...)
{
	int c, b = 0;
	va_list arg;

	va_start(arg, str);

	if (str == NULL)
	{
		_printchar('\n');
	}

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] == '%')
		{
			c++;
			if (str[c] == 'd' || str[c] == 'c' || str[c] == ('x' || 'X'))
			{
				funcsplit(arg, str[c]);
				va_arg(arg, int);
				b--;
			}
			if (str[c] == 's')
			{
				b += printstr(va_arg(arg, char *)) - 2;
			}
			else if (str[c] == '%')
			{
				_printchar(str[c]);
			}
		}
		else
		{
			_printchar(str[c]);
		}
	}
	return (c + b);
}
