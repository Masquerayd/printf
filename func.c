#include "main.h"

char *strf(specvalue speval)
{
	return (speval.str);
}
/*
char *decf(const char *format, specvalue speval)
{
        return (speval.str);
}

char *unsf(const char *format, specvalue speval)
{
        return (speval.str);
}

char *flof(const char *format, specvalue speval)
{
        return (speval.str);
}
*/
char *chaf(specvalue speval)
{
	char *str = {speval.cha, '\0'}
        return (str);
}
/*
char *hexf(const char *format, specvalue speval)
{
        return (speval.str);
}

char *HEXf(const char *format, specvalue speval)
{
        return (speval.str);
}
*/
char *perf(specvalue speval)
{
        return ("%");
}
/*
char *stof(const char *format, specvalue speval)
{
        return (speval.str);
}
*/
