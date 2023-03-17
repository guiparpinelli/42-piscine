/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                                  :+:      :+:    :+:
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

int ft_str_is_uppercase(char *str);
int is_uppercase(int c);

int main(void) {
  char uppercase[] = "UPPERCASESTRING";
  char not_uppercase[] = "ffffff";
  char mixed[] = "ImFalsyMate";

  printf("1 is True, 0 is False\n");
  printf("%s: %d\n", uppercase, ft_str_is_uppercase(uppercase));
  printf("%s: %d\n", not_uppercase, ft_str_is_uppercase(not_uppercase));
  printf("%s: %d\n", mixed, ft_str_is_uppercase(mixed));
  return (0);
}

int is_uppercase(int c) { return ((c >= 'A' && c <= 'Z')); }

int ft_str_is_uppercase(char *str) {
  int i;
  int result;

  result = 0;
  i = 0;
  while (str[i + 1] != '\0') {
    result = is_uppercase(str[i]);
    if (!result) {
      break;
    }
    i++;
  }
  return (result);
}