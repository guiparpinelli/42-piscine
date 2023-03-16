char *ft_strcpy(char *dest, char *src) {
  int i;

  i = 0;
  while (*src != '\0') {
    *(dest + i++) = *src++;
  }
  *(dest + i) = '\0';
  return dest;
}
/* #include <stdio.h> */

/* int main() { */
/*   char src[] = "some string"; */
/*   char dest[] = ""; */

/*   ft_strcpy(dest, src); */
/*   printf("%s\n", dest); */
/* } */