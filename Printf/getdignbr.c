int		getdignbr(int i)
{
  if (i > 0)
    getnbrpos(i);
  if (i < 0)
    getnbrneg(i);
}

int		getnbrpos(int i)
{
  if (i > 2147483647)
    return (0);
  if (i >= 1000000000)
    return (10);
  if (i >= 100000000)
    return (9);
  if (i >= 10000000)
    return (8);
  if (i >= 1000000)
    return (7);
  if (i >= 100000)
    return (6);
  if (i >= 10000)
    return (5);
  if (i >= 1000)
    return (4);
  if (i >= 100)
    return (3);
  if (i >= 10)
    return (2);
  if (i >= 0)
    return (1);
}

int		getnbrneg(int i)
{
    if (i < -2147483647)
    return (0);
  if (i <= -1000000000)
    return (1);
  if (i <= -100000000)
    return (9);
  if (i <= -10000000)
    return (8);
  if (i <= -1000000)
    return (7);
  if (i <= -100000)
    return (6);
  if (i <= -10000)
    return (5);
  if (i <= -1000)
    return (4);
  if (i <= -100)
    return (3);
  if (i <= -10)
    return (2);
  if (i <= -1)
    return (1);
}
