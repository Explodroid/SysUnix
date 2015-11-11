#ifndef MY_H_
#define MY_H_
#include <stdarg.h>
#include <stdio.h>

typedef struct	s_print
{
  va_list	fmt;
  int		returnv;
  int		idx;
}		t_print;

#endif /* MY_H_ */

