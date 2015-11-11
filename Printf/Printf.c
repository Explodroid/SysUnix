#include "my.h"

void		declare(t_print *print)
{
  print->returnv = 0;
  print->idx = 0;
}

void		func_calls(t_print *print, char *format)
{
  printf_c(print, format);
  printf_n(print, format);
  printf_backn(print, format);
  printf_s(print, format);
  printf_di(print, format);
}

int		my_printf(char *format, ...)
{
  t_print	print;

  declare(&print);
  va_start(print.fmt, format);
  while (format[print.idx] != '\0')
    {
      if (format[print.idx] != '%' && format[print.idx - 1] != '%')
	{
	  my_putchar(format[print.idx]);
	}
      if (format[print.idx] == '%')
	{
	  func_calls(&print, format);
	}
      print.idx = print.idx + 1;
    }
  va_end(print.fmt);
  my_put_nbr(print.returnv);
  return (print.returnv);
}

void		main()
{
  int		d;
  d = 24;
  my_printf("%d\n", d);
}
