/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:29:54 by natferna          #+#    #+#             */
/*   Updated: 2024/05/28 15:22:28 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>//

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 2;
	printf("antes de llamar a la función a= %d\n, b= %d", a, b);
	ft_swap(&a, &b);
	printf("despues de llamar a la función a=%d\n b=%d", a, b);
	return (0);
}*/
