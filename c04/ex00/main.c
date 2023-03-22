#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main(int argc, char *argv[]) {

  if (argc == 1 || argc > 2)
    return 1;

  printf("strlen: %lu\n", strlen(argv[1]));
  printf("ft_strlen: %d\n", ft_strlen(argv[1]));
  return 0;
}
