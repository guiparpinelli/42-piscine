/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparpine <gparpine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:05:26 by gparpine          #+#    #+#             */
/*   Updated: 2023/03/16 19:02:14 by gparpine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "some string";
	char	dest[] = "";

	ft_strncpy(dest, src, strlen(src));
	printf("%s\n", dest);
	return (0);
}
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	size_t	i;

	i = 0;
	while (i < n && *src != '\0')
	{
		*(dest + i++) = *src++;
	}
	*(dest + i) = '\0';
	return (dest);
}
