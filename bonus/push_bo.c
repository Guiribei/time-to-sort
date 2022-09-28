/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 03:45:33 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/20 20:40:29 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list_bo **src, t_list_bo **dst)
{
	t_list_bo	*tmp;

	if (*src == NULL)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = tmp;
}

void	pa_bo(t_list_bo **head_a, t_list_bo **head_b)
{
	if (*head_b == NULL)
		return ;
	push(head_b, head_a);
}

void	pb_bo(t_list_bo **head_a, t_list_bo **head_b)
{
	push(head_a, head_b);
}
