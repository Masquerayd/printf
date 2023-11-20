#include "main.h"

/**
 * funcsplit - chooses which function to use
 * @value: passed argument
 * @cha: spercifier
 */
void funcsplit(char value, char cha)
{
	switch (cha)
	{
		case 'c':
			_printchar(value);
			break;
		case 'i':
			printf("!!i(%c)", value);
			break;
	}
}
