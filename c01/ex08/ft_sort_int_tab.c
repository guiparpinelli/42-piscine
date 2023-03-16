void swap(int *a, int *b) {
  int tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}

void ft_sort_int_tab(int *tab, int size) {
  int tmp;
  int i;
  int j;

  i = 0;
  while (i < size - 1) {
    j = 0;
    while (j < size - i - 1) {
      if (tab[j] > tab[j + 1]) {
        swap(&tab[j], &tab[j + 1]);
      }
      j++;
    }
    i++;
  }
}
/* #include <stdio.h> */

/* int main() { */
/*   int arr[] = {5, 4, 3, 2, 1}; */
/*   int size = sizeof(arr) / sizeof(arr[0]); */

/*   printf("Before sorting:\n"); */
/*   for (int i = 0; i < size; i++) { */
/*     printf("%d ", arr[i]); */
/*   } */

/*   ft_sort_int_tab(arr, size); */

/*   printf("\nAfter sorting:\n"); */
/*   for (int i = 0; i < size; i++) { */
/*     printf("%d ", arr[i]); */
/*   } */

/*   return 0; */
/* } */