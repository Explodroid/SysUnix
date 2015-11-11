#include "my.h"

void		printf_s(t_print *print, char *format)
{
  if (format[print->idx + 1] == 's')
    {
      
      my_putstr(va_arg(print->fmt, char *));
      print->returnv = print->returnv + my_strlen(va_arg(print->fmt, char *));
    }
}
