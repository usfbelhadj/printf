#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 *
 *
 *
 *
 */
int print_char(va_list arg)
{
char c;
 c = va_arg(arg, int);
_putchar(c);
return(1);
}
