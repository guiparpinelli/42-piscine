/*
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(int argc, char *argv[]) {

  if (argc == 1 || argc > 3) {
    return 1;
  }

  printf("strcmp: %d\n", strcmp(argv[1], argv[2]));
  printf("ft_strcmp: %d\n", ft_strcmp(argv[1], argv[2]));
  return 0;
}
*/
int
ft_strcmp (char *s1, char *s2)
{
  int i;

  i = 0;
  while (s1[i] == s2[i])
    {
      if (s1[i] == '\0')
        {
          return 0;
        }
      i++;
    }
  return s1[i] - s2[i];
}
