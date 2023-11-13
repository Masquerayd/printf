#ifndef FUNCTIONS_H
#define FUNCTIONS_H
/*
 * libraries that will be used by different functions
 */
#include <stdio.h>
#include <stdarg.h>

/**
 * struct specvalue - specifier value
 *
 * @str: string 
 * @cha: character value
 * @unvalue: unsigned integer
 * @int: integer value
 * fvalue: float value
 */

typedef struct specvalue
{
	char *str;
	char cha;
	unsigned int unvalue;
	int intvalue;
	double fvalue;
} specvalue;

/**
 * fsele - selects a function based on spercifier
 * @f: function pointer to a function 
 */

typedef struct fsele
{
	char spec;
	char *(*f)(char *format, specvalue speval);
} funselec;

/*
 * functions that will be chosen by the spercifier
 */

char *strf(char *format, specvalue speval);
char *decf(char *format, specvalue speval);
char *unsignf(char *format, specvalue speval);
char *chaf(char *format, specvalue speval);
char *hexf(char *format, specvalue speval);
char *HEXf(char *format, specvalue speval);
char *perf(char *format, specvalue speval);
char *savf(char *format, specvalue speval);

/*
 * Functions that will be used in the main function
 */

int _printf(const char *format, ...);
char *(*get_func(char *s))(char *, specvalue);

#endif
