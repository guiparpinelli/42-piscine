#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_create_elem (void *data);

void
print_list (t_list *list)
{
  while (list != NULL)
    {
      printf ("\"%s\" -> ", list->data);
      list = list->next;
    }
  printf ("NULL\n");
}

int
main (void)
{
  t_list *list;

  list = ft_create_elem ("blablabla");
  print_list (list);
}
