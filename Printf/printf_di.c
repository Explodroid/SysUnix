#include "my.h"

void		printf_di(t_print *print, char *format)
{
  if (format[print->idx + 1] == 'd' || format[print->idx + 1] == 'i')
    {
      print->returnv = print->returnv + getdignbr(va_arg(print->fmt, int));
      my_put_nbr(va_arg(print->fmt, int));
    }
}
