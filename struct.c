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
{"%", print_char},
{NULL, NULL},
};
int i = 0;
while (check[i].sign != NULL)
{
if (*format == *(check[i].sign))
return (check[i].f);
i++;
}
}