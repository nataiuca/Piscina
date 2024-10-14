/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:23:06 by natferna          #+#    #+#             */
/*   Updated: 2024/05/30 12:23:21 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "HOLI";
	char	str2[] = "DRaR";
	char	str3[] = "AsaS";

	printf("Primera cadena: %s\n", ft_strlowcase(str1));
	printf("Segunda cadena: %s\n", ft_strlowcase(str2));
	printf("Tercera cadena: %s\n", ft_strlowcase(str3));
	return (0);
}*/
