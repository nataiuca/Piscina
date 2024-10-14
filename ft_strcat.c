/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:44:08 by natferna          #+#    #+#             */
/*   Updated: 2024/05/30 16:51:49 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*temp)
	{
		temp++;
	}
	while (*src)
	{
		*temp++ = *src++;
	}
	*temp = ('\0');
	return (dest);
}

/*int	main(void)
{
	char	dest[20] = "Hello";
	char	src[] = "world";

	printf("Antes de concatenar: '%s'\n", dest);
	ft_strcat(dest, src);
	printf("despues de concatenar: '%s'\n", dest);
	return (0);
}*/
