#include <stdio.h>
#include <string.h>

char *ft_strdup (char *str);

int
main (void)
{
  char *str;
  char *str_copy;

  str = "Test string.";
  str_copy = ft_strdup (str);
  if (strcmp (str, str_copy) != 0)
    printf ("KO, string is not the same.\n");
  else
    printf ("OK.\n");
  str = "";
  str_copy = ft_strdup (str);
  if (strcmp (str, str_copy) != 0)
    printf ("KO, string is not the same.\n");
  else
    printf ("OK.\n");
  str = "eeeeeeee vida de gado";
  str_copy = ft_strdup (str);
  if (strcmp (str, str_copy) != 0)
    printf ("KO, string is not the same.\n");
  else
    printf ("OK.\n");
  return (0);
}
