/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:44:29 by natferna          #+#    #+#             */
/*   Updated: 2024/06/12 12:53:11 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*buffer;
	int	*d;

	if (min >= max)
		return (0);
	range = max - min;
	d = ((buffer = malloc(range * sizeof(int))));
	if (!d)
		return (0);
	i = 0;
	while (i < range)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}
