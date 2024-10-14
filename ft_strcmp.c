/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:39:10 by natferna          #+#    #+#             */
/*   Updated: 2024/05/30 13:51:37 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hello";
	char	str3[] = "Hell";
	char	str4[] = "World";

	printf("comparamos cadenas: %d\n", ft_strcmp(str1, str2));
	printf("comparamos cadenas: %d\n", ft_strcmp(str1, str3));
	printf("comparamos cadenas: %d\n", ft_strcmp(str1, str4));
	printf("comparamos cadenas: %d\n", ft_strcmp(str2, str3));
	return (0);
}*/
