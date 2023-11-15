#include "main.h"
#include <unistd.h>

/**
 * _printchar - prints the str to the std output
 * @str: string to print
 * Return: returns a string
 */
int _printchar(char str)
{
	return (write(1, &str, 1));
}
