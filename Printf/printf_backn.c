#include "my.h"

void		printf_backn(t_print *print, char *format)
{
  if (format[print->idx + 1] == '\n')
    {
      my_putchar('\n');
      print->returnv = print->returnv + 1;
    }
}
