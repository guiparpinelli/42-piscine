#include <stdio.h>

int ft_find_next_prime(int nb);

int main() {
  int test_cases[] = {0, 1, 2, 3, 13, 25, 28, 31};
  int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

  for (int i = 0; i < num_tests; i++) {
    int input = test_cases[i];
    int output = ft_find_next_prime(input);
    printf("Input: %d, Output: %d\n", input, output);
  }

  return 0;
}