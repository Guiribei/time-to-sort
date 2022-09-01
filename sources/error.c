/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:43:25 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/01 01:37:07 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	size_check(char **argv)
{
	int				i;
	long long int	tmp;

	i = 0;
	while (argv[i])
	{
		tmp = ft_atoi(argv[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

int	comparing(int argc, char **argv)
{
	int	i;
	int	j;
	int	res;

	res = -1;
	i = 1;
	j = argc - 1;
	while (argv[i])
	{
		j = argc - 1;
		while (i < j)
		{
			res = ft_numcmp(ft_atoi(argv[i]), ft_atoi(argv[j]));
			if (res == 0)
				return (res);
			j--;
		}
		i++;
	}
	return (res);
}

void	check_argv(int argc, char **argv)
{
	int	i;
	int	j;

	size_check(argv);
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		if (comparing(argc, argv) == 0)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}
