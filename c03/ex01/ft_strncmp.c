/*
#include <stdio.h>
#include <string.h>

#define N 4

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int argc, char *argv[]) {

  if (argc == 1 || argc > 3) {
    return 1;
  }

  printf("strncmp: %d\n", strncmp(argv[1], argv[2], N));
  printf("ft_strncmp: %d\n", ft_strncmp(argv[1], argv[2], N));
  return 0;
}
*/
/*
 * The function uses a while loop to compare characters of the two strings until
 * either all `n` characters have been compared or a character difference is
 * found. It returns the difference between the last compared characters of the
 * two strings, which is obtained by subtracting *s2 from *s1.
 */
int ft_strncmp(char *s1, char *s2, unsigned int n) {
  while (*s1 == *s2 && --n && *s1) {
    s1++;
    s2++;
  }
  return (*s1 - *s2);
}