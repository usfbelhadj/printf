#include"holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_rot13 - rot13
 * @arg: argument
 * Return: integer
 */
int print_rot13(va_list arg)
{
 unsigned int i = 0, j = 0, n = 0;
char *ch;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char m[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
ch = va_arg(arg, char *);
if (ch == NULL)
return (-1);
while (ch[i] != '\0')
{
for (j = 0; a[j]; j++)
{
if (ch[i] == a[j])
{
_putchar(m[i]);
n++;
break;
}
}
_putchar(ch[i]);
n++;
}
return (n);
}