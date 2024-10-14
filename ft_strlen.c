/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:38:21 by natferna          #+#    #+#             */
/*   Updated: 2024/06/03 14:00:50 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/*int	main(void)
{
	char	str1[] = "Hola";
	char	str2[] = "gksgñb doerh";
	char	str3[] = "como estas";

	printf("La cadena 1 tiene %d\n caracteres", ft_strlen(str1));
	printf("La cadena 2 tiene %d\n caracteres", ft_strlen(str2));
	printf("La cadena 3 tiene %d\n caracteres", ft_strlen(str3));
	return (0);
}*/
