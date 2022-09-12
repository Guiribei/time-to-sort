/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:37:38 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/01 17:47:33 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int nb)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->nb = nb;
	lst->index = 0;
	lst->pos = -1;
	lst->target_pos = -1;
	lst->cost_a = -1;
	lst->cost_b = -1;
	lst->next = NULL;
	lst->next = NULL;
	return (lst);
}
