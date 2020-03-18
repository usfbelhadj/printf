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
int i = 0, j = 0, n = 0;
char *ch;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char m[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
ch = va_arg(arg, char *);
while (ch[i] != '\0')
{
for (j = 0; j <= 51; j++)
{
if (ch[i] == a[j])
{
ch[i] = m[j];
_putchar(ch[i]);
n++;
break;
}
}
i++;
}
return (n);
}