#include "functions.h"

char *strf(const char *format, specvalue speval)
{
	printf("in strf, format %s and string arg %s", format, speval.str);
	return (speval.str);
}

char *decf(const char *format, specvalue speval)
{
        printf("in decf, format %s and string arg %s", format, speval.str);
        return (speval.str);
}

