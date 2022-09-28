/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 03:34:19 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/20 20:40:51 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list_bo *head)
{
	int	tmp;

	if (head == NULL || head->next == NULL)
		return ;
	tmp = head->nb;
	head->nb = head->next->nb;
	head->next->nb = tmp;
}

void	sa_bo(t_list_bo **head)
{
	if (head == NULL)
		return ;
	swap(*head);
}

void	sb_bo(t_list_bo **head)
{
	if (*head == NULL)
		return ;
	swap(*head);
}

void	ss_bo(t_list_bo **head_a, t_list_bo **head_b)
{
	swap(*head_a);
	swap(*head_b);
}
