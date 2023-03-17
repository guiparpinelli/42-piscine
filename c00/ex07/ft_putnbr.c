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

/*
   The following function stores the argument's value into a long
   to be able to represent larger values.

   The first if expression returns earlier if the given number is
   0 in order to avoid unecessary operations.

   The second if expression checks if the given number is a negative
   number, invert the value to a positive, and write a "-" character
   to indicate a negative value. After that, it is guaranteed that
   the `nbl` variable contains a positive integer, therefore its safe
   to iterate through each remainer digit, sum the value with the 0
   digit ASCII code (48), storing each digit in the buffer variable.
   The last iteration handles writing all digits in the buffer.
*/
void	ft_putnbr(int nb)
{
	long	nbl;
	char	c[10];
	short	i;

	nbl = nb;
	i = 0;
	if (0 == nb)
	{
		write(1, "0", 1);
		return ;
	}
	if (nbl < 0)
	{
		nbl *= -1;
		write(1, "-", 1);
	}
	while (nbl > 0)
	{
		c[i++] = (nbl % 10) + 48;
		nbl /= 10;
	}
	while (i > 0)
	{
		write(1, &c[--i], 1);
	}
}
