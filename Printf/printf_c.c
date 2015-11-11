#include "my.h"

void		printf_c(t_print *print, char *format)
{
  if (format[print->idx + 1] == 'c')
    {
      my_putchar(va_arg(print->fmt, int));
      print->returnv = print->returnv + 1;
    }
}
