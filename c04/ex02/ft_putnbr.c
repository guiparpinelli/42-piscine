/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparpine <gparpine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:21:54 by gparpine          #+#    #+#             */
/*   Updated: 2023/03/15 12:43:22 by gparpine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

void ft_putnbr(int nb) {
  if (nb < 0) {
    write(1, "-", 1);
    nb *= -1;
  }
  if (nb > 9)
    ft_putnbr(nb / 10);
  ft_putchar(nb % 10 + '0');
}