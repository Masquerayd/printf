#include <unistd.h>
#include "main.h"

/**
 * printstr - prints the str to the std output
 * @str: string to print
 */
int printstr(char *str)
{
	int strlength = _strlen(str);
	return (write(1, str, strlength));
}
