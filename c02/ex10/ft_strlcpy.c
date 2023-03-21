/*
#include <stdio.h>
#include <string.h>

#define DEST_BUFFER_SIZE 10

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void) {
  char test_fit[] = "i fit in";
  char test_bigger[] = "much longer string, might lose information";
  char test_empty[] = "";
  char dest[256];

  printf("src: %s (len %lu) -> %s  (len %d)\n", test_fit, strlen(test_fit),
         dest, ft_strlcpy(dest, test_fit, DEST_BUFFER_SIZE));
  printf("src: %s (len %lu) -> %s  (len %d)\n", test_bigger,
         strlen(test_bigger), dest,
         ft_strlcpy(dest, test_bigger, DEST_BUFFER_SIZE));
  printf("src: %s (len %lu) -> %s  (len %d)\n", test_empty, strlen(test_empty),
         dest, ft_strlcpy(dest, test_empty, DEST_BUFFER_SIZE));
  return 0;
}
*/
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
  int len;

  len = 0;
  while (src[len] && --size)
    *dest++ = src[len++];
  *dest = '\0';
  while (src[len])
    ++len;
  return (len);
}
