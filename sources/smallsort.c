/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:19:14 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/20 20:42:25 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_trd_index(t_list *head)
{
	int	index;

	index = head->index;
	while (head)
	{
		if (head->index > index)
			index = head->index;
		head = head->next;
	}
	return (index);
}

void	sort_three(t_list **head)
{
	int	trd_index;

	if (is_sorted(*head))
		return ;
	trd_index = get_trd_index(*head);
	if ((*head)->index == trd_index)
		ra(head);
	else if ((*head)->next->index == trd_index)
		rra(head);
	if ((*head)->index > (*head)->next->index)
		sa(head);
}

int	is_sorted(t_list *head)
{
	while (head->next != NULL)
	{
		if (head->nb > head->next->nb)
			return (0);
		head = head->next;
	}
	return (1);
}

void	small_sort(t_list **head, int nums)
{
	if (nums == 1)
		return ;
	else if (nums == 2)
	{
		if (!is_sorted(*head))
			sa(head);
		else
			return ;
	}
	else
	{
		if (!is_sorted(*head))
			sort_three(head);
	}
}
