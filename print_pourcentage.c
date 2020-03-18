#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * print_pourcentage - prints % after finding %
 * @arg: argument
 * Return: 1
 */
int print_pourcentage(va_list __attribute__((unused)) arg)
{
_putchar('%');
return (1);
}
