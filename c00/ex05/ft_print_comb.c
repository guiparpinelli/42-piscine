/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparpine <gparpine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:56:39 by gparpine          #+#    #+#             */
/*   Updated: 2023/03/10 13:36:57 by gparpine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_n(char v[])
{
	if (v[0] == '7' && v[1] == '8' && v[2] == '9')
	{
		write(1, v, 3);
		return ;
	}
	write(1, v, 5);
}

void	ft_print_comb(void)
{
	char	num[5];

	num[0] = '0';
	num[3] = ',';
	num[4] = ' ';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				write_n(num);
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
