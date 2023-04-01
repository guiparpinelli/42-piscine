/*
#include <stdio.h>
#include <string.h>

#define N 10

char *ft_strstr(char *str, char *to_find);

int main(int argc, char *argv[]) {
  char dest[] = "if you look closely (((42))) you can find it";

  if (argc == 1 || argc > 2) {
    return 1;
  }

  printf("strstr: %s\n", strstr(dest, argv[1]));
  printf("ft_strstr: %s\n", ft_strstr(dest, argv[1]));
  return 0;
}
*/
char *
ft_strstr (char *str, char *to_find)
{
  int i;
  int cursor;
  int lookup;

  i = 0;
  if (!to_find)
    return (str);
  while (str[i])
    {
      cursor = i;
      lookup = 0;
      while (str[cursor] == to_find[lookup] && to_find[lookup])
        {
          cursor++;
          lookup++;
        }
      if (!to_find[lookup])
        return (str + i);
      i++;
    }
  return (NULL);
}
