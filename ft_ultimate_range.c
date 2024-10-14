/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:06:52 by natferna          #+#    #+#             */
/*   Updated: 2024/06/12 13:19:16 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*buffer;
	int	*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	j = max - min;
	d = ((buffer = malloc(j * sizeof(int))));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < j)
	{
		buffer[i] = min + i;
		i++;
	}
	return (j);
}
