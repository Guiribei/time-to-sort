/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 04:42:20 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/20 20:42:35 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_position(t_list **head_a, int index_b, int closest_idx, int position)
{
	t_list	*tmp;

	tmp = *head_a;
	while (tmp)
	{
		if (tmp->index > index_b && tmp->index < closest_idx)
		{
			closest_idx = tmp->index;
			position = tmp->pos;
		}
		tmp = tmp->next;
	}
	if (closest_idx != INT_MAX)
		return (position);
	tmp = *head_a;
	while (tmp)
	{
		if (tmp->index < closest_idx)
		{
			closest_idx = tmp->index;
			position = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (position);
}

void	track_position(t_list **head)
{
	t_list	*tmp;
	int		i;

	tmp = *head;
	i = 0;
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;
		i++;
	}
}

void	find_target_pos(t_list **head_a, t_list **head_b)
{
	t_list	*tmp;
	int		position;

	tmp = *head_b;
	track_position(head_a);
	track_position(head_b);
	position = 0;
	while (tmp)
	{
		position = find_position(head_a, tmp->index, INT_MAX, position);
		tmp->target_pos = position;
		tmp = tmp->next;
	}
}

void	populate_b(t_list **head_a, t_list **head_b)
{
	int	i;
	int	sent;
	int	stack_size;
	int	half_stack;

	stack_size = ft_lstsize(*head_a);
	half_stack = stack_size / 2;
	sent = 0;
	i = 0;
	while (stack_size > 6 && i < stack_size && sent < half_stack)
	{
		if ((*head_a)->index <= half_stack)
		{
			pb(head_a, head_b);
			sent ++;
		}
		else
			ra(head_a);
		i++;
	}
	while (stack_size - sent > 3)
	{
		pb(head_a, head_b);
		sent++;
	}
}

void	sort(t_list **head_a, t_list **head_b)
{
	populate_b(head_a, head_b);
	small_sort(head_a, 3);
	while (*head_b)
	{
		find_target_pos(head_a, head_b);
		calculate_cost(head_a, head_b);
		best_instruction(head_a, head_b);
	}
	if (!is_sorted(*head_a))
		ajust_order(head_a);
}
