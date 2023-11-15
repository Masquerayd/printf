#include "main.h"

/**
 * _strlen - determines the length of the string
 * @str: the string
 * Return: length of string
 */
int _strlen(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

