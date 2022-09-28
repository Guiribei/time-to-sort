/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:55:36 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/20 20:42:05 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	exec_rr(t_list **head_a, t_list **head_b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		(*cost_a)--;
		(*cost_b)--;
		rr(head_a, head_b);
	}
}

static void	exec_rrr(t_list **head_a, t_list **head_b, int *cost_a, int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		(*cost_a)++;
		(*cost_b)++;
		rrr(head_a, head_b);
	}
}

static void	exec_a(t_list **head_a, int *cost_a)
{
	while (*cost_a)
	{
		if (*cost_a > 0)
		{
			(*cost_a)--;
			ra(head_a);
		}
		else if (*cost_a < 0)
		{
			(*cost_a)++;
			rra(head_a);
		}
	}
}

static void	exec_b(t_list **head_b, int *cost_b)
{
	while (*cost_b)
	{
		if (*cost_b > 0)
		{
			(*cost_b)--;
			rb(head_b);
		}
		else if (*cost_b < 0)
		{
			(*cost_b)++;
			rrb(head_b);
		}
	}
}

void	exec_instruct(t_list **head_a, t_list **head_b, int cost_a, int cost_b)
{
	if (cost_a > 0 && cost_b > 0)
		exec_rr(head_a, head_b, &cost_a, &cost_b);
	else if (cost_a < 0 && cost_b < 0)
		exec_rrr(head_a, head_b, &cost_a, &cost_b);
	exec_a(head_a, &cost_a);
	exec_b(head_b, &cost_b);
	pa(head_a, head_b);
}
