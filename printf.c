#include "main.h"
#include <stdlib.h>

/**
 * _printf - acts like printf
 * @format: the string to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	char *(*f)(specvalue), *buffer, temp;
	int flag = 0,flag2 = 0, count;
	specvalue speval;

	buffer = malloc(100000);	

	va_start(arg, format);
	
	for (count = 0 ; format[count] != '\0'; count++)
	{
		if (format[count] == '%' && format != NULL)
		{
			format++;
			flag2 = 1;
			f = get_func(format[count]);
			if (format[count] == ('i' || 'x' || 'X'))
			{
				speval.intvalue = va_arg(arg, int);
			}
			else if (format[count] == 'c')
			{
				speval.cha = va_arg(arg, int);
			}
			else if (format[count] == 'f')
			{
				speval.fvalue = va_arg(arg, double);
			}
			else if	(format[count] == 's')
			{
				speval.str = va_arg(arg, char *);
			}
			else if (format[count] == 'u')
			{
				speval.unvalue = va_arg(arg, unsigned int);
			}
			else if (format[count] == '%')
			{
				if (flag == 1)
				{
					flag = 0;
					f = NULL;
				}
				else
				{
					flag = 1;
				}
			}
			if (f != NULL)
			{
				buffer = _strcat(buffer,f(speval));
			}
		}
		if (flag2 == 0)
		{
			temp = format[count];
			buffer[_strlen(buffer)] = temp;
			buffer[_strlen(buffer) + 1] = '\0';
		}
		flag = 0;
		flag2 =0;
	}
	count = printstr(buffer);
	free(buffer);
	va_end(arg);
	return (count - 1);
}



	
