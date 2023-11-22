#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
	len = _printf("%d", INT_MAX);
        len2 = printf("%d", INT_MAX);
        fflush(stdout);
        if (len != len2)
        {
                printf("Lengths differ.\n");
                fflush(stdout);
                return (1);
        }
        return (0);
}
