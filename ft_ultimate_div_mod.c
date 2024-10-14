/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:13:07 by natferna          #+#    #+#             */
/*   Updated: 2024/05/28 15:58:18 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temporal;

	if (*b != 0)
	{
		temporal = *a;
		*a = temporal / *b;
		*b = temporal % *b;
	}
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 5;
	printf("Antes de la division: a=%d, b= %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("despues de la division a=%d (cociente) b=%d (resto)", a, b);
	return (0);
}*/
