void ft_rev_int_tab(int *tab, int size) {
  int tmp;
  int i;

  i = 0;
  while (i < size / 2) {
    tmp = tab[i];
    tab[i] = tab[size - 1 - i];
    tab[size - 1 - i] = tmp;
    i++;
  }
}
/* #include <stdio.h> */

/* int main() { */
/*   int arr[] = {1, 2, 3, 4, 5}; */
/*   int size = sizeof(arr) / sizeof(arr[0]); */

/*   printf("Before reversing:\n"); */
/*   for (int i = 0; i < size; i++) { */
/*     printf("%d ", arr[i]); */
/*   } */

/*   ft_rev_int_tab(arr, size); */

/*   printf("\nAfter reversing:\n"); */
/*   for (int i = 0; i < size; i++) { */
/*     printf("%d ", arr[i]); */
/*   } */

/*   int arr[5] = {1, 2, 3, 4, 5}; */
/*   int size = sizeof(arr) / sizeof(arr[0]); */

/*   printf("Size of array: %lu\n", sizeof(arr)); */
/*   printf("Size of int: %lu\n", sizeof(int)); */
/*   printf("Number of elements in array: %d\n", size); */
/*   return 0; */
/* } */