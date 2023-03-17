/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparpine <gparpine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:26:23 by gparpine          #+#    #+#             */
/*   Updated: 2023/03/14 14:00:17 by gparpine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	should_display(int *digits, int n)
{
	int	i;
	int	display;

	display = 1;
	i = 0;
	while (++i < n)
	{
		if (digits[i - 1] >= digits[i])
		{
			display = 0;
		}
	}
	return (display);
}

void	print(int *digits, int n)
{
	int	i;

	if (!should_display(digits, n))
	{
		return ;
	}
	i = -1;
	while (++i < n)
	{
		ft_putchar(digits[i] + 48);
	}
	if (digits[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

/*
   Initialize digits from pointer `digits` and limit `n`.
   e.g. - in case `n = 3`, digits = 012
*/
void	init_digits(int *digits, int n)
{
	int	i;

	i = -1;
	while (++i < n)
	{
		digits[i] = i;
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	digits[10];

	if (0 > n || 10 <= n)
	{
		return ;
	}
	init_digits(digits, n);
	while (digits[0] <= (10 - n))
	{
		print(digits, n);
		digits[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (digits[i] > 9)
			{
				digits[i - 1]++;
				digits[i] = 0;
			}
		}
	}
}
