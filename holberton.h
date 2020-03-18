#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
/**
 * struct print - print types.
 * @sign:char types.
 * @f: function.
 *
 */
typedef struct print
{
char *sign;
int (*f)(va_list);
} print;
int _printf(const char *format, ...);
int _putchar(char c);
int print_pourcentage(va_list arg);
int print_char(va_list arg);
int print_string(va_list arg);
int print_number(va_list arg);
int print_as_is(va_list arg);
int (*get_sign_func(const char *format))(va_list);
#endif
