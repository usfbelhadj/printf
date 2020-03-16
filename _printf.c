#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
int i, j = 0, c = 0;
va_list arg;
va_start(arg, format);
if (format == NULL)
return (-1);
for (i = 0; format[i] != '\0'; i++)
if (format[i] == '%' || format[i + 1] == '%')
{
_putchar('%');
}
else if (format[i] == '%' || format[i + 1])
continue;
if (format[i] == '\0')
{
return(-1);
while (*format++)
{
j++;
}
}
/**************************************************************************************************************/
/************************************FUNCTION******************************************************************/
/***************************************************************************************************************/
va_end(arg);
return(c);
}