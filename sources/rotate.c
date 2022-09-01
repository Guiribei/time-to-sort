/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 01:18:24 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/01 03:51:20 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **head)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *head;
	*head = (*head)->next;
	last = ft_lstlast(*head);
	tmp->next = NULL;
	last->next = tmp;
}

void	ra(t_list **head)
{
	rotate(head);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_list **head)
{
	rotate(head);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_list **head1, t_list **head2)
{
	rotate(head1);
	rotate(head2);
	ft_putstr_fd("rr\n", 1);
}
