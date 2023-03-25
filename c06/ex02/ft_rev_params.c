#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  int i;
  int j;

  if (argc < 2) {
    return 1;
  }

  i = 1;
  j = 0;
  while (argv[i])
    i++;
  while (argv[--i] && i > 0) {
    while (argv[i][j])
      write(1, &argv[i][j++], 1);
    write(1, "\n", 1);
    j = 0;
  }
  return 0;
}