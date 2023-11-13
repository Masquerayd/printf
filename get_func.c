#include "functions.h"


/**
 * get_func - get the function that will be needed to process the function
 * @s: the spercifier
 * Returns: the function needed
 */
char *(*get_func(char *s))(char *, specvalue)
{
/**
 * initilizing funselec struct with spercifiers and functions
 * This is an array loop that is used to change through the different functions
 */


	funselec fselect[] = {
		{'s', strf},
		{'d', decf},
		{'u', unsignf},
		{'c', chaf},
		{'x', hexf},
		{'X', HEXf},
		{'%', perf},
		{'n', savf},
	};

	int i;
/*
 * for loops checks if spercifier is the same as the spercifier passed
 * if it is it then returns the function
 */
	for (i = 0; i < 9; i++)
	{
		if ((fselect[i].spec) == *(s))
		{
			return (fselect[i].f);
					
		}
		i++;
	}
	return (NULL);
}

