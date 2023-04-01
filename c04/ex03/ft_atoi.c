#include <stdio.h>

int
is_digit (char c)
{
  return ((c >= '0' && c <= '9'));
}

int
is_space (char c)
{
  return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
          || c == '\r');
}

int
is_sign (char c)
{
  return ((c == '+' || c == '-'));
}

int
ft_atoi (char *str)
{
  int result;
  int sign;
  int i;

  result = 0;
  sign = 1;
  i = 0;
  while (is_space (str[i]))
    i++;
  while (is_sign (str[i]))
    {
      if (str[i] == '-')
        sign *= -1;
      i++;
    }
  while (is_digit (str[i]))
    {
      result = (result * 10) + (str[i] - '0');
      i++;
    }
  return result * sign;
}
