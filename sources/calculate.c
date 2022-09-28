/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:03:14 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/20 20:41:59 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calculate_cost(t_list **head_a, t_list **head_b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;
	int		size_a;
	int		size_b;

	tmp_a = *head_a;
	tmp_b = *head_b;
	size_a = ft_lstsize(*head_a);
	size_b = ft_lstsize(*head_b);
	while (tmp_b)
	{
		tmp_b->cost_b = tmp_b->pos;
		if (tmp_b->pos > size_b / 2)
			tmp_b->cost_b = (size_b - tmp_b->pos) * -1;
		tmp_b->cost_a = tmp_b->target_pos;
		if (tmp_b->target_pos > size_a / 2)
			tmp_b->cost_a = (size_a - tmp_b->target_pos) * -1;
		tmp_b = tmp_b->next;
	}
}

void	best_instruction(t_list **head_a, t_list **head_b)
{
	t_list	*tmp;
	int		best;
	int		cost_a;
	int		cost_b;

	tmp = *head_b;
	best = ft_numabs(tmp->cost_a) + ft_numabs(tmp->cost_b);
	cost_a = tmp->cost_a;
	cost_b = tmp->cost_b;
	tmp = tmp->next;
	while (tmp)
	{
		if (ft_numabs(tmp->cost_a) + ft_numabs(tmp->cost_b) < best)
		{
			best = ft_numabs(tmp->cost_a) + ft_numabs(tmp->cost_b);
			cost_a = tmp->cost_a;
			cost_b = tmp->cost_b;
		}
		tmp = tmp->next;
	}
	exec_instruct(head_a, head_b, cost_a, cost_b);
}
