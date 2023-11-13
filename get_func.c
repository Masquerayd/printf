#include "functions.h"

/**
 * get_func - get the function that corresponds to the s
 * @s: character
 * Return: the function
 */
char *(*get_func(char s))(const char *format,specvalue)
{
	funselec funcs[] = {
		{'s', strf},
		{'d', decf}
	};

	int i = 0;

	while (i < 2)
	{
		if (funcs[i].spec == s)
		{
			return (funcs[i].f);
		}
		i++;
	}
	return NULL;
}
