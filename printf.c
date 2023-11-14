#include "functions.h"

int _printf(const char *format, ...)
{
	va_list arg;
	int count;
	char *(*f)(const char *, specvalue);
	specvalue speval; 

	va_start(arg, format);
	
	for (count = 0 ; format[count] != '\0'; count++)
	{
		if (format[count] == '%')
		{
			f = get_func(format[count + 1]);
			switch (format[count +1])
			{
				case 'i':
				case 'x':
				case 'X':
					speval.intvalue = va_arg(arg, int);
					break;
				case 'c':
					speval.cha = va_arg(arg, int);
					break;
				case 'f':
					speval.fvalue = va_arg(arg, double);
					break;
				case 's':
					speval.str = va_arg(arg, char *);
					break;
				case 'u':
					speval.unvalue = va_arg(arg, unsigned int);
					break;
			}

			f(format, speval);
		}
	}
	return (count);
	va_end(arg);
}



	
