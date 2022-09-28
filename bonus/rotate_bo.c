/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 01:18:24 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/20 20:40:42 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list_bo **head)
{
	t_list_bo	*tmp;
	t_list_bo	*last;

	tmp = *head;
	if ((*head)->next)
		*head = (*head)->next;
	else
		return ;
	last = ft_lstlast_bo(*head);
	tmp->next = NULL;
	last->next = tmp;
}

void	ra_bo(t_list_bo **head)
{
	rotate(head);
}

void	rb_bo(t_list_bo **head)
{
	if (*head == NULL)
		return ;
	rotate(head);
}

void	rr_bo(t_list_bo **head_a, t_list_bo **head_b)
{
	if (*head_b == NULL)
		return ;
	rotate(head_a);
	rotate(head_b);
}
