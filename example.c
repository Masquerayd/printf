#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * This is where i test my functions
 */
char *argMalloc(va_list list)
{
	char *size;
	int count

	size = malloc(sizeof(list));

	return (size);
}

void _printf(int n, ...)
{
	int count;
	va_list arg;
	char * space;
	(void)n;

	space = argMalloc(arg);
	
	for (count = 0; space[count] != '\0'; count++)
	{
	}
	printf("%d",count);


}



int main(void)
{
	_printf(4,1,2,3,4,5,5,4,4);

	return (0);
}


