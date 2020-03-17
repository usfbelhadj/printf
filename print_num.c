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
int print_number(va_list arg)
{
int n, div, tens = 1, len = 0;
n = va_arg(arg, int);
if (n < 0)
{
_putchar('-');
len++;
n = -n;
}
div = n;
while ((div / 10) != 0)
{
div /= 10;
tens *= 10;
}
while (tens > 0)
{
_putchar((n / tens) + '0');
len++;
n %= tens;
n /= 10;
}
return (len);
}
