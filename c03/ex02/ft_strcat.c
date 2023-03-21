/*
#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(int argc, char *argv[]) {
  char dest[] = "hello,";

  if (argc == 1 || argc > 2) {
    return 1;
  }

  printf("ft_strcat: %s\n", ft_strcat(dest, argv[1]));
  return 0;
}
*/
char *ft_strcat(char *dest, char *src) {
  int i;
  int dest_end;

  i = 0;
  dest_end = 0;
  while (dest[dest_end])
    dest_end++;
  while (src[i]) {
    dest[dest_end] = src[i];
    dest_end++;
    i++;
  }
  dest[dest_end] = '\0';
  return (dest);
}