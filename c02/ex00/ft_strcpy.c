/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparpine <gparpine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:43:49 by gparpine          #+#    #+#             */
/*   Updated: 2023/03/16 18:04:51 by gparpine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "some string";
	char	dest[] = "";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src != '\0')
	{
		*(dest + i++) = *src++;
	}
	*(dest + i) = '\0';
	return (dest);
}
