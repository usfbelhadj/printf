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
int print_pourcentage(va_list arg)
{
_putchar('%');
(void *)arg;
return(1);
}
