/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 03:45:33 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/20 20:42:13 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **src, t_list **dst)
{
	t_list	*tmp;

	if (*src == NULL)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = tmp;
}

void	pa(t_list **head_a, t_list **head_b)
{
	push(head_b, head_a);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list **head_a, t_list **head_b)
{
	push(head_a, head_b);
	ft_putstr_fd("pb\n", 1);
}
