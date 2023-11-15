#ifndef main_H
#define main_H
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
	char *(*f)(specvalue speval);
} funselec;

/*
 * functions that will be chosen by the spercifier
 */

char *strf(specvalue speval);
char *decf(const char *format, specvalue speval);
char *unsf(const char *format, specvalue speval);
char *flof(const char *format, specvalue speval);
char *chaf(specvalue speval);
char *hexf(const char *format, specvalue speval);
char *HEXf(const char *format, specvalue speval);
char *perf(specvalue speval);
char *stof(const char *format, specvalue speval);

/*
 * Functions that will be used in the main function
 */

int _printf(const char *format, ...);
char *(*get_func(char s))(specvalue);
int _strlen(char *str);
char *_strcat(char *buffer, char *str);
int printstr(char *str);

#endif
