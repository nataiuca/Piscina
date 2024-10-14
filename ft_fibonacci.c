/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:33:32 by natferna          #+#    #+#             */
/*   Updated: 2024/06/05 15:39:16 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

/*int	main(void)
{
	int	index = 0;

	while (index <= 10)
	{
		printf("Fibonacci de %d es %d\n:", index, ft_fibonacci(index));
		index++;
	}
	return (0);
}*/
