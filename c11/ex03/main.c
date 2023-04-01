#include <stdio.h>
#include <string.h>

int ft_count_if (char **tab, int length, int (*f) (char *));

int
is_empty (char *str)
{
  return (*str == '\0');
}

int
main (void)
{
  char *tab0[]
      = { "bla bla bla", "", "tatat", "777", "", "hahsdfas", "", "4123" };
  char *tab1[] = { "", "", "tatat", "777", "", "hahsdfas", "", "4123" };
  printf ("expected: 3, got %i\n", ft_count_if (tab0, 8, is_empty));
  printf ("expected: 4, got %i\n", ft_count_if (tab1, 8, is_empty));
}
