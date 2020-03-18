#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - Function That Print
 * @format: string
 * Return: what fuction return
 */
int _printf(const char *format, ...)
{
int i = 0, c = 0;
va_list arg;
int (*print)(va_list);
va_start(arg, format);
if (format == NULL)
return (-1);
while (format[i] != '\0')
{
while (format[i] != '%' && format[i] != '\0')
{
_putchar(format[i]);
c++;
i++;
}
if (format[i] == '%' && format[i + 1] == '\0')
{
_putchar('%');
}
if (format[i] == '%')
{
i++;
for (; format[i] == ' '; i++)
;
if (format[i] == '\0')
return (c);
else
{
print = get_sign_func(&format[i]);
if (print == NULL)
{
_putchar('%');
_putchar(format[i]);
c += 2;
i++;
}
else
{
c += print(arg);
i++;
}
}
}
}
va_end(arg);
return (c);
}
