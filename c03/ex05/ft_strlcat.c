/*
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(int argc, char *argv[]) {
  char dest[] = "hello world";

  if (argc == 1 || argc > 2) {
    return 1;
  }

  printf("strlcat: %lu\n", strlcat(dest, argv[1], sizeof(dest)));
  printf("ft_strlcat: %d\n", ft_strlcat(dest, argv[1], sizeof(dest)));
  return 0;
}
*/
int size_sum(char *dest, char *src) {
  int len_src;
  int len_dest;

  len_src = 0;
  len_dest = 0;
  while (src[len_src])
    ++len_src;
  while (dest[len_dest])
    ++len_dest;
  return (len_src + len_dest);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
  int i;
  int space;
  int result;

  i = 0;
  while (dest[i])
    ++i;
  space = (size - i) - 1;
  result = size_sum(dest, src);
  while (*src && space--)
    dest[i++] = *src++;
  dest[i] = '\0';
  return (result);
}