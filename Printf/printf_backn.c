#include "my.h"

void		printf_backn(t_print *print, char *format)
{
  if (format[print->idx + 1] == '\n')
    {
      my_putchar('\n');
      print->idx = print->idx + 1;
    }
}
