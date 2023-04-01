#include <stdio.h>

char *ft_strcapitalize (char *str);

int
main (int argc, char *argv[])
{
  char test[]
      = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  char test_mixed[]
      = "sALut, cOmMeNT tu Vas ? 42mOts quAranTE-dEux; cINquAnTe+eT+Un";
  char test_empty[] = "";

  printf ("%s\n", ft_strcapitalize (test));
  printf ("%s\n", ft_strcapitalize (test_mixed));
  printf ("%s\n", ft_strcapitalize (test_empty));
  return 0;
}

int
is_lower (char c)
{
  return ((c >= 'a' && c <= 'z'));
}
int
is_upper (char c)
{
  return ((c >= 'A' && c <= 'Z'));
}
int
is_alpha (char c)
{
  return (is_lower (c) || is_upper (c));
}
int
is_space_or_symbol (char c)
{
  return ((c >= 9 && c <= 13) || (c >= 32 && c <= 47) || (c >= 59 && c <= 64)
          || (c >= 91 && c <= 96) || (c >= 123 && c <= 127));
}

char *
ft_strcapitalize (char *str)
{
  short i;

  i = 0;
  while (str[i])
    {
      while (!(is_alpha (str[i])))
        {
          i++;
        }

      if (i == 0)
        {
          if (is_lower (str[i]))
            {
              str[i] -= 32;
            }
          i++;
          continue;
        }

      if (is_space_or_symbol (str[i - 1]))
        {
          if (is_lower (str[i]))
            {
              str[i] -= 32;
            }
          i++;
        }

      while (is_alpha (str[i]))
        {
          if (is_upper (str[i]))
            {
              str[i] += 32;
            }
          i++;
        }
    }
  return (str);
}
