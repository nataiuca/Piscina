/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:11:02 by natferna          #+#    #+#             */
/*   Updated: 2024/05/30 10:11:50 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "";
	char	str2[] = "h4ol";
	char	str3[] = "as";

	printf("Primera cadena: %d\n", ft_str_is_lowercase(str1));
	printf("Segunda cadena: %d\n", ft_str_is_lowercase(str2));
	printf("Tercera cadena: %d\n", ft_str_is_lowercase(str3));
	return (0);
}*/
