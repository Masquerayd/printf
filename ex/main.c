#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len2,len1;
	_printf("philani %% %s %c\n","you are awesome", 'k');
	printf("philani %% %s %c\n","you are awesome", 'k');
    len2 = _printf("Let's try to printf a simple sentence.\n");
    len1 = printf("Let's try to printf a simple sentence.\n");
/*    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
*/    printf("Length:[%d, %i]\n", len2, len1);
  /*_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
*/  len2 =_printf("Character:[%c]\n", 'H');
    len1 =printf("Character:[%c]\n", 'H');
    printf("Length:[%d, %i]\n", len2, len1);
    len2 = _printf("String:[%s]\n", "I am a string !");
    len1 = printf("String:[%s]\n", "I am a string !");
    printf("Length:[%d, %i]\n", len2, len1);

/*    len2 = _printf("Address:[%p]\n", addr);
    len1 = printf("Address:[%p]\n", addr);
*/  _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
   _printf("Len:[%d]\n", len1);
   printf("Len:[%d]\n", len2);
  /* _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
  */ return (0);
}
