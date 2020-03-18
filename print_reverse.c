#include"holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_reverse - prints a function in reverse
 * @arg: argument
 * Return: integer
 */
int print_reverse(va_list arg)
{
char *str;
int i = 0, c = 0;
str = va_arg(arg, char*);
while (str[i] != '\0')
{
i++;
}
for (i = i - 1; i >= 0; i--)
{
_putchar(str[i]);
c++;
}
return (c);
}
