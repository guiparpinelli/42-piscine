#include <stdlib.h>

void ft_putnbr(int nb);

int main(int argc, char *argv[]) {

  if (argc == 1 || argc > 2)
    return 1;

  int num = atoi(argv[1]);
  ft_putnbr(num);
  return 0;
}