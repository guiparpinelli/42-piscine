#include <stdio.h>

char *ft_strlowcase (char *str);

int
main (int argc, char *argv[])
{
  char test[] = "LOWERCASE ME";
  char test_empty[] = "";
  char test_upper_only[] = "already lower case";

  printf ("%s\n", ft_strlowcase (test));
  printf ("%s\n", ft_strlowcase (test_empty));
  printf ("%s\n", ft_strlowcase (test_upper_only));
  return 0;
}

char *
ft_strlowcase (char *str)
{
  int i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
        {
          str[i] += 32;
        }
      i++;
    }
  return (str);
}
