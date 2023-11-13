#include "functions.h"

int _printf(const char *format, ...)
{
	int count;
	char *(*f)(const char *, specvalue);
	specvalue speval; 
	speval.str = "hello";
	
	for (count = 0 ; format[count] != '\0'; count++)
	{
		if (format[count] == '%')
		{
			f = get_func(format[count + 1]);
			f(format, speval);
		}
	}
	return (count);
}



	
