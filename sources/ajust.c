/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ajust.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:02:53 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/20 20:41:55 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_lowest_idx_pos(t_list **head)
{
	t_list	*tmp;
	int		low_index;
	int		position;

	tmp = *head;
	low_index = INT_MAX;
	track_position(head);
	position = tmp->pos;
	while (tmp)
	{
		if (tmp->index < low_index)
		{
			low_index = tmp->index;
			position = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (position);
}

void	ajust_order(t_list **head_a)
{
	int	size;
	int	pos_lowest;

	size = ft_lstsize(*head_a);
	pos_lowest = find_lowest_idx_pos(head_a);
	if (pos_lowest > size / 2)
	{
		while (pos_lowest < size)
		{
			rra(head_a);
			pos_lowest++;
		}
	}
	else
	{
		while (pos_lowest > 0)
		{
			ra(head_a);
			pos_lowest--;
		}
	}
}
