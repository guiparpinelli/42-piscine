#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main(int argc, char *argv[]) {

  if (argc == 1 || argc > 2)
    return 1;

  printf("atoi: %d\n", atoi(argv[1]));
  printf("ft_atoi: %d\n", ft_atoi(argv[1]));
  return 0;
}