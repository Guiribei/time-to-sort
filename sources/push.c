/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 03:45:33 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/01 03:57:17 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **src, t_list **dst)
{
	t_list	*tmp;

	if (*src == NULL)
		return ;
	tmp = (*src)->next; // I'm really not so sure about this parentesis
	(*src)->next = *dst;
	*dst = *src;
	*src = tmp;
}

void	pa(t_list **head1, t_list **head2)
{
	push(head2, head1);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list **head1, t_list **head2)
{
	push(head1, head2);
	ft_putstr_fd("pb\n", 1);
}
