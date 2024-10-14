/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:50:28 by natferna          #+#    #+#             */
/*   Updated: 2024/06/03 11:08:59 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0' && nb > 0)
	{
		*temp = *src;
		temp++;
		src++;
		nb--;
	}
	*temp = ('\0');
	return (dest);
}

/*int	main(void)
{
	char	dest[20] = "Hello";
	char	src[] = "world";

	printf("Antes de concatenar: '%s'\n", dest);
	ft_strncat(dest, src, 3);
	printf("despues de concatenar: '%s'\n", dest);
	return (0);
}*/
