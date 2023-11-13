#include "functions.h"

char *strf(char *format, specvalue speval)
{
	printf("in strf, format %s and string arg %s", format, speval.str);
	return (speval.str);
}	
