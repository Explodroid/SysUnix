#include "my.h"

void		printf_n(t_print *print, char *format)
{
  if (format[print->idx + 1] == 'n')
    {
      my_put_nbr(print->returnv);
      print->returnv = print->returnv * 2;
    }
}
