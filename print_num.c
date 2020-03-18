#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 *
 *
 *
 *
 */
int print_number(va_list arg)
{
  int long nb, num = 1, len = 0;
  unsigned int long ddiv;
  nb = va_arg(arg, int);
  if (nb < 0)
    {
      _putchar('-');
      len++;
      nb = -1 * nb;
    }
  ddiv = nb;
  while ((ddiv / 10) != 0)
    {
      ddiv = ddiv / 10;
      num = num * 10;
    }
  while (num > 0)
    {
      _putchar((nb / num) + '0');
      len++;
      nb = nb % num;
      num = num / 10;
    }
  return (len);
}
