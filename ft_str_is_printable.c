/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:46:26 by natferna          #+#    #+#             */
/*   Updated: 2024/05/30 10:46:50 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "";
	char	str2[] = "h4o\nl";
	char	str3[] = "AS";

	printf("Primera cadena: %d\n", ft_str_is_printable(str1));
	printf("Segunda cadena: %d\n", ft_str_is_printable(str2));
	printf("Tercera cadena: %d\n", ft_str_is_printable(str3));
	return (0);
}*/
