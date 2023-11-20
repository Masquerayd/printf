#include <unistd.h>
#include "main.h"

/**
 * printstr - prints the str to the std output
 * @str: string to print
 * Return: string length
 */
int printstr(char *str)
{
	int strlength = _strlen(str);

	if (str == NULL)
	{
		strlength = _strlen("(null)");
		write(1, "(null)", strlength);
		return (strlength);
	}

	write(1, str, strlength);
	return (strlength);
}
