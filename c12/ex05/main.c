#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_list_push_strs (int size, char **strs);

t_list *
ft_create_elem (void *data)
{
  t_list *ret;

  ret = malloc (sizeof (t_list));
  if (ret != NULL)
    {
      ret->data = data;
      ret->next = NULL;
    }
  return (ret);
}

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
  char *test0[] = { "blablabla", "abacaxi", "banana", "árvore" };
  char *test1[] = { "vaca", "galinha", "cavalo", "porco", "ovelha" };

  t_list *list0 = ft_list_push_strs (4, test0);
  t_list *list1 = ft_list_push_strs (5, test1);
  ;

  printf ("list: ");
  print_list (list0);
  printf ("list: ");
  print_list (list1);
}
