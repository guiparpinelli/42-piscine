/*
#include <stdio.h>
#include <string.h>

#define N 10

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(int argc, char *argv[]) {
  char dest[] = "hello,";

  if (argc == 1 || argc > 2) {
    return 1;
  }

  printf("ft_strncat: %s\n", ft_strncat(dest, argv[1], N));
  return 0;
}
*/
char *
ft_strncat (char *dest, char *src, unsigned int nb)
{
  int i;
  int dest_end;

  i = 0;
  dest_end = 0;
  while (dest[dest_end])
    dest_end++;
  while (src[i] && nb--)
    {
      dest[dest_end] = src[i];
      dest_end++;
      i++;
    }
  dest[dest_end] = '\0';
  return (dest);
}
