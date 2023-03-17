/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparpine <gparpine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:04:41 by gparpine          #+#    #+#             */
/*   Updated: 2023/03/16 19:53:20 by gparpine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_alpha(char *str);
int is_alpha(int c);

int main(void) {
  char alpha[] = "alphastring";
  char not_alpha[] = "////#@@#///";
  char mixed[] = "@user_42";

  printf("1 is True, 0 is False\n");
  printf("%s: %d\n", alpha, ft_str_is_alpha(alpha));
  printf("%s: %d\n", not_alpha, ft_str_is_alpha(not_alpha));
  printf("%s: %d\n", mixed, ft_str_is_alpha(mixed));
  return (0);
}

int is_alpha(int c) {
  return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int ft_str_is_alpha(char *str) {
  int i;
  int result;

  result = 0;
  i = 0;
  while (str[i + 1] != '\0') {
    result = is_alpha(str[i]);
    if (!result) {
      break;
    }
    i++;
  }
  return (result);
}
