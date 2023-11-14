#include "functions.h"

int main(void)
{
	_printf("%c%s%u%f%X%x%%%n",'k', "boom", 500, 22.22, 0x2, 0x3);
	printf("\n");
	return (0);
}
