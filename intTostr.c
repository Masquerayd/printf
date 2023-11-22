#include "main.h"


/**
 * intTstr - changes int to string
 * @str: malloc created string
 * @inum: num to be converted
 */
void intTstr(int inum, char *str)
{
	int i = 0, number, length = 0, a;

	a = inum;
	if (inum == 0)
	{
		length++;
		str[length -1] = '0';
	}

	while (a != 0)
	{
		length++;
		a /= 10;
	}
	if (inum < 0)
	{
		inum = -inum;
		str[0] = 45;
		length++;

		for (i = i; i + 1 < length; i++)
		{
			number = inum % 10;
			inum = inum / 10;
			str[length - (i + 1)] = number + '0';
		}
	}
	else
	{
		for (i = i; i < length; i++)
		{
			number = inum % 10;
			inum = inum / 10;
			str[length - (i + 1)] = number + '0';
		}
	}
	str[length] = '\0';
}
