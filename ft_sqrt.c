/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:43:06 by natferna          #+#    #+#             */
/*   Updated: 2024/06/05 15:50:33 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (sqrt * sqrt < nb)
	{
		sqrt++;
	}
	if (sqrt * sqrt == nb)
	{
		return (sqrt);
	}
	else
	{
		return (0);
	}
}

/*int	main(void)
{
	int	num = 16;
	int	sqrt = ft_sqrt(num);

	printf("La raiz cuadrada de %d es %d\n:", num, sqrt);
	return (0);
}*/
