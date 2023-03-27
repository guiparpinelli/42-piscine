#include <stdlib.h>
#include <unistd.h>

void ft_putnbr(int nb);

int main(int ac, char **av) {
  if (ac == 2) {
    int num = atoi(av[1]);
    ft_putnbr(num);
  }
  write(1, "\n", 1);
}