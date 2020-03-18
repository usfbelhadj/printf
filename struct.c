#include "holberton.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * get_sign_func - sign function
 * @s: string
 * Return: integer
 */
int (*get_sign_func(const char *format))(va_list)
{
print check[] = {
{"s", print_string},
{"c", print_char},
{"i", print_number},
{"d", print_number},
{"%", print_pourcentage},
{NULL, NULL},
};
int i = 0;
for (i = 0; check[i].sign != NULL ; i++)
{
if (*format == *(check[i].sign))
break;
}
return (check[i].f);
}
