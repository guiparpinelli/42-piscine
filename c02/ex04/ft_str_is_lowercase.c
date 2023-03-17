/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                                  :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: gparpine <gparpine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:04:41 by gparpine          #+#    #+#             */
/*   Updated: 2023/03/16 19:53:20 by gparpine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_lowercase(char *str);
int is_lowercase(int c);

int main(void) {
  char lowercase[] = "lowercasestring";
  char not_lowercase[] = "FFFFFF";
  char mixed[] = "ImFalsyMate";

  printf("1 is True, 0 is False\n");
  printf("%s: %d\n", lowercase, ft_str_is_lowercase(lowercase));
  printf("%s: %d\n", not_lowercase, ft_str_is_lowercase(not_lowercase));
  printf("%s: %d\n", mixed, ft_str_is_lowercase(mixed));
  return (0);
}

int is_lowercase(int c) { return ((c >= 'a' && c <= 'z')); }

int ft_str_is_lowercase(char *str) {
  int i;
  int result;

  result = 0;
  i = 0;
  while (str[i + 1] != '\0') {
    result = is_lowercase(str[i]);
    if (!result) {
      break;
    }
    i++;
  }
  return (result);
}