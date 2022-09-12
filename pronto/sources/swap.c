/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 03:34:19 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/02 04:54:23 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list *head)
{
	int	tmp;

	if (head == NULL || head->next == NULL)
		return ;
	tmp = head->nb;
	head->nb = head->next->nb;
	head->next->nb = tmp;
	tmp = head->index;
	head->index = head->next->index;
	head->next->index = tmp;
}

void	sa(t_list **head)
{
	swap(*head);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list **head)
{
	swap(*head);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_list **head_a, t_list **head_b)
{
	swap(*head_a);
	swap(*head_b);
	ft_putstr_fd("ss\n", 1);
}
