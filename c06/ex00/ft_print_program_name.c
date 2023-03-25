#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  int len;
  char *program_name;

  if (argc > 1) {
    return 1;
  }
  program_name = argv[0];
  len = 0;
  while (program_name[len])
    len++;
  write(1, program_name, len);
  write(1, "\n", 1);
  return 0;
}