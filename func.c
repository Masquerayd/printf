#include "functions.h"

char *strf(const char *format, specvalue speval)
{
	printf("in strf, format %s and string arg %s \n", format, speval.str);
	return (speval.str);
}

char *decf(const char *format, specvalue speval)
{
        printf("in decf, format %s and string arg %d\n", format, speval.intvalue);
        return (speval.str);
}

char *unsf(const char *format, specvalue speval)
{
        printf("in unsf, format %s and string arg %u\n", format, speval.unvalue);
        return (speval.str);
}

char *flof(const char *format, specvalue speval)
{
        printf("in flof, format %s and string arg %f\n", format, speval.fvalue);
        return (speval.str);
}

char *chaf(const char *format, specvalue speval)
{
        printf("in chaf, format %s and string arg %c\n", format, speval.cha);
        return (speval.str);
}

char *hexf(const char *format, specvalue speval)
{
        printf("in hexf, format %s and string arg %d\n", format, speval.intvalue);
        return (speval.str);
}

char *HEXf(const char *format, specvalue speval)
{
        printf("in HEXf, format %s and string arg %d\n", format, speval.intvalue);
        return (speval.str);
}

char *perf(const char *format, specvalue speval)
{
        printf("in perf, format %s and string arg %%\n", format);
        return (speval.str);
}

char *stof(const char *format, specvalue speval)
{
        printf("in stof, format %s\n", format);
        return (speval.str);
}

