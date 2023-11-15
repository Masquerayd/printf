#include "main.h"

/**
 * funcsplit - chooses which function to use
 * @arg: passed argument
 * @cha: spercifier
 */
void funcsplit(va_list arg, char cha)
{
	switch (cha)
	{
		case 'c':
			_printchar(va_arg(arg, int));
			break;
		case 'i':
			printf("!!i(%c)", va_arg(arg, int));
			break;
	}
}
