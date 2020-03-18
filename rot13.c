#include"holberton.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_rot13 - rot13
 * @arg: argument
 * Return: integer
 */
int print_rot13(va_list arg)
{
unsigned int i = 0, j = 0;
int n = 0;
char *ch;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char m[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
ch = va_arg(arg, char *);
if (ch == NULL)
ch = "(None)";
while (ch[i] != '\0')
{
for (j = 0; a[j]; j++)
{
if (ch[i] == a[j])
{
_putchar(m[j]);
n++;
break;
}
}
if (!a[j])
{
_putchar(ch[i]);
n++;
}
i++;
}
return (n);
}
