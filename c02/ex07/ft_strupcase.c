#include <stdio.h>

char *ft_strupcase (char *str);

int
main (int argc, char *argv[])
{
  char test[] = "uppercase me";
  char test_empty[] = "";
  char test_upper_only[] = "ALREADY ALL CAPS";

  printf ("%s\n", ft_strupcase (test));
  printf ("%s\n", ft_strupcase (test_empty));
  printf ("%s\n", ft_strupcase (test_upper_only));
  return 0;
}

char *
ft_strupcase (char *str)
{
  int i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
        {
          str[i] -= 32;
        }
      i++;
    }
  return (str);
}
