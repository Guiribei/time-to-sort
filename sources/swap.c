/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 03:34:19 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/01 03:51:26 by guribeir         ###   ########.fr       */
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

void	ss(t_list **head1, t_list **head2)
{
	swap(*head1);
	swap(*head2);
	ft_putstr_fd("ss\n", 1);
}
