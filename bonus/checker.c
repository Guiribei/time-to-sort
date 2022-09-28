/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:27:02 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/20 20:38:10 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_instru(char *cmd, t_list_bo **head_a, t_list_bo **head_b)
{
	if (ft_strcmp(cmd, "ra") == 0 || ft_strcmp(cmd, "rb") == 0 || \
	ft_strcmp(cmd, "rr") == 0 || ft_strcmp(cmd, "pa") == 0 || \
	ft_strcmp(cmd, "pb") == 0 || ft_strcmp(cmd, "rra") == 0 || \
	ft_strcmp(cmd, "rrb") == 0 || ft_strcmp(cmd, "rrr") == 0 || \
	ft_strcmp(cmd, "sa") == 0 || ft_strcmp(cmd, "sb") == 0 || \
	ft_strcmp(cmd, "ss") == 0)
		return ;
	else
	{
		write(2, "Error\n", 6);
		ft_lstclear_bo(head_a);
		ft_lstclear_bo(head_b);
		exit(1);
	}
}

void	checker(char *cmd, t_list_bo **head_a, t_list_bo **head_b)
{
	is_instru(cmd, head_a, head_b);
	if (ft_strcmp(cmd, "pa") == 0)
		pa_bo(head_a, head_b);
	else if (ft_strcmp(cmd, "pb") == 0)
		pb_bo(head_a, head_b);
	else if (ft_strcmp(cmd, "ra") == 0)
		ra_bo(head_a);
	else if (ft_strcmp(cmd, "rb") == 0)
		rb_bo(head_b);
	else if (ft_strcmp(cmd, "rr") == 0)
		rr_bo(head_a, head_b);
	else if (ft_strcmp(cmd, "sa") == 0)
		sa_bo(head_a);
	else if (ft_strcmp(cmd, "sb") == 0)
		sb_bo(head_b);
	else if (ft_strcmp(cmd, "ss") == 0)
		ss_bo(head_a, head_b);
	else if (ft_strcmp(cmd, "rra") == 0)
		rra_bo(head_a);
	else if (ft_strcmp(cmd, "rrb") == 0)
		rrb_bo(head_b);
	else if (ft_strcmp(cmd, "rrr") == 0)
		rrr_bo(head_a, head_b);
}
