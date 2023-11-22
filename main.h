#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * struct specvalue - specifier value
 *
 * @str: string
 * @cha: character value
 * @unvalue: unsigned integer
 * @intvalue: integer value
 * @fvalue: float value
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
 * struct fsele - selects a function based on spercifier
 * @f: function pointer to a function
 * @spec: spercifier
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
int _printchar(char str);
int printstr(char *str);
int funcsplit(va_list value, char cha);
int printschec(char *string);
void intTstr(int inum, char *str);


#endif
