int
ft_sqrt (int nb)
{
  if (nb < 0)
    return (0);
  if (nb == 1)
    return (1);

  int i;
  int result;

  result = 0;
  i = 1;
  while (i <= nb / 2)
    {
      if (i * i == nb)
        {
          result = i;
          break;
        }
      i++;
    }
  return (result);
}
