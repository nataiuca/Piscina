/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:08:26 by natferna          #+#    #+#             */
/*   Updated: 2024/06/06 12:17:28 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	print_args(int argc, char **argv, int i)
{
	if (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		print_args(argc, argv, i + 1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	print_args(argc, argv, 1);
	return (0);
}	
