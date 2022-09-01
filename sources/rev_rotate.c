/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 02:18:38 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/01 03:51:14 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_list **head)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*penult;

	last = ft_lstlast(*head);
	penult = ft_lstpenult(*head);
	tmp = *head;
	*head = last;
	(*head)->next = tmp;
	penult->next = NULL;
}

void	rra(t_list **head)
{
	rev_rotate(head);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_list **head)
{
	rev_rotate(head);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_list **head1, t_list **head2)
{
	rev_rotate(head1);
	rev_rotate(head2);
	ft_putstr_fd("rrr\n", 1);
}
