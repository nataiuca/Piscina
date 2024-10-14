/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:59:52 by natferna          #+#    #+#             */
/*   Updated: 2024/06/06 13:05:11 by natferna         ###   ########.fr       */
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

int	print_reverse_args(int argc, char **argv, int i)
{
	if (i >= 1)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		print_reverse_args(argc, argv, i - 1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		print_reverse_args(argc, argv, argc - 1);
	}
	return (0);
}
