#include <stdio.h>

int ft_str_is_numeric (char *str);

int
main (void)
{
  char numeric[] = "0122132";
  char not_numeric[] = "////#@@#///";
  char mixed[] = "@user_42";

  printf ("1 is True, 0 is False\n");
  printf ("%s: %d\n", numeric, ft_str_is_numeric (numeric));
  printf ("%s: %d\n", not_numeric, ft_str_is_numeric (not_numeric));
  printf ("%s: %d\n", mixed, ft_str_is_numeric (mixed));
  return (0);
}

int
is_numeric (int c)
{
  return ((c >= '0' && c <= '9'));
}

int
ft_str_is_numeric (char *str)
{
  int i;
  int result;

  result = 0;
  i = 0;
  while (str[i + 1] != '\0')
    {
      result = is_numeric (str[i]);
      if (!result)
        {
          break;
        }
      i++;
    }
  return (result);
}
