#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 *print_string- Function That Print String
 *@arg: Input
 *Return: Output
 */
int print_string(va_list arg)
{
char *s;
int i;
s = va_arg(arg, char*);
if (s == NULL)
{
write(1, "(null)", 6);
return (6);
}
i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
return (i);
}
