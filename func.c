#include "functions.h"

char *strf(const char *format, specvalue speval)
{
	printf("in strf, format %s and string arg %s%s", format, speval.str,format);
	return (speval.str);
}

char *decf(const char *format, specvalue speval)
{
	printf("in decf, format %s and string arg %s", format, speval.str);
	return (speval.str);
}

char *unsignf(const char *format, specvalue speval)
{
	printf("in unsignf, format %s and string arg %s", format, speval.str);
	return (speval.str);
}

char *chaf(const char *format, specvalue speval)
{
	printf("in chaf, format %s and string arg %s", format, speval.str);
	return (speval.str);
}

char *hexf(const char *format, specvalue speval)
{
	printf("in hexf, format %s and string arg %s", format, speval.str);
	return (speval.str);
}

char *HEXf(const char *format, specvalue speval)
{
	printf("in HEXf, format %s and string arg %s", format, speval.str);
	return (speval.str);
}

char *perf(const char *format, specvalue speval)
{
	printf("in perf, format %s and string arg %s", format, speval.str);
	return (speval.str);
}

char *savf(const char *format, specvalue speval)
{
	printf("in savf, format %s and string arg %s", format, speval.str);
	return (speval.str);
}
