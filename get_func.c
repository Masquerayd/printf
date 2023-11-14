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
		{'d', decf},
		{'u', unsf},
		{'f', flof},
		{'c', chaf},
		{'x', hexf},
		{'X', HEXf},
		{'%', perf},
		{'n', stof}
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
