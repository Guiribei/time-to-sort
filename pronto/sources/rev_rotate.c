/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 02:18:38 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/02 04:53:12 by guribeir         ###   ########.fr       */
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

void	rrr(t_list **head_a, t_list **head_b)
{
	rev_rotate(head_a);
	rev_rotate(head_b);
	ft_putstr_fd("rrr\n", 1);
}
