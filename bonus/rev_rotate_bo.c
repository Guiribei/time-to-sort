/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_bo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 02:18:38 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/20 20:40:34 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_list_bo **head)
{
	t_list_bo	*tmp;
	t_list_bo	*last;
	t_list_bo	*penult;

	last = ft_lstlast_bo(*head);
	penult = ft_lstpenult_bo(*head);
	tmp = *head;
	*head = last;
	(*head)->next = tmp;
	penult->next = NULL;
}

void	rra_bo(t_list_bo **head)
{
	rev_rotate(head);
}

void	rrb_bo(t_list_bo **head)
{
	if (*head == NULL)
		return ;
	rev_rotate(head);
}

void	rrr_bo(t_list_bo **head_a, t_list_bo **head_b)
{
	if (*head_b == NULL)
		return ;
	rev_rotate(head_a);
	rev_rotate(head_b);
}
