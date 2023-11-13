#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - printf the format string with the arguments 
 * @format: format string
 * Returns: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0;
	char *(*func)(const char *, specvalue);
	char *str;
	specvalue svalue;

	va_start(arg, format);
	svalue.str = "hello";

/*
 * for loop checks for the spercifier and then passes the specifier int the function
 * The function then returns a function that will process the argument by adding the 
 * procced argument to the buffer
 * for now we will just print the functions to see that we are enterting all of them
 */

	for (count = 0; *(format + count) != '\0'; count++)
	{
		if (*(format + count) == '%')
		{
			func = get_func(format[count + 1]);
			str = func(format, svalue);
			printf("%p",str);
		}
	}
	return (0);

}

