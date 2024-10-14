/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:25:01 by natferna          #+#    #+#             */
/*   Updated: 2024/05/30 11:25:47 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != ('\0'))
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "";
	char	str2[] = "msJd";
	char	str3[] = "AsaS";

	printf("Primera cadena: %s\n", ft_strupcase(str1));
	printf("Segunda cadena: %s\n", ft_strupcase(str2));
	printf("Tercera cadena: %s\n", ft_strupcase(str3));
	return (0);
}*/
