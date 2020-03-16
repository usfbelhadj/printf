#include "holberton.h"
/**
 *
 *
 *
 *
 */
void print_char(va_list arg)
{
char c;
 c = va_arg(arg, int);
_putchar(c);
}
/**
 *
 *
 *
 */
void print_string(va_list arg)
{
char *s;
int i;
s = va_arg(arg, char*);
if (s == NULL)
return;
for (i = 0; s[i] != '\0'; i++)
_putchar(s[i]);
}
/**
 *
 *
 *
 *
 */
void print_number(va_list arg)
{
int x, j, i = 0, l, n, m, k = 1;
l = va_arg(arg, int);
if (l == NULL)
return;
m = l;
else
{
if (l < 0)
{
_putchar('-');
if (l == -2147483648)
l += 1;
l = -l;
}
l = l;
while (l > 0)
{
l = l / 10;
i++;
if (i > 1)
k *= 10;
}
for (j = 0 ; j < i ; j++)
{
x = n / k;
if (m == -2147483648 && j == i - 1)
x += 1;
_putchar(x + '0');
n = n % k;
k /= 10;
}
}
}
