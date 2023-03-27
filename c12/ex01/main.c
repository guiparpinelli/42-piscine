#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void ft_list_push_front(t_list **begin_list, void *data);

t_list *ft_create_elem(void *data) {
  t_list *ret;

  ret = malloc(sizeof(t_list));
  if (ret != NULL) {
    ret->data = data;
    ret->next = NULL;
  }
  return (ret);
}

void print_list(t_list *list) {
  while (list != NULL) {
    printf("\"%s\" -> ", list->data);
    list = list->next;
  }
  printf("NULL\n");
}

int main(void) {
  t_list *list;

  ft_list_push_front(&list, "banana");
  ft_list_push_front(&list, "maçã");
  ft_list_push_front(&list, "abacaxi");
  print_list(list);
}
