/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:37:38 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/20 20:39:04 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_bo	*ft_lstnew_bo(int nb)
{
	t_list_bo	*lst;

	lst = (t_list_bo *)malloc(sizeof(t_list_bo));
	if (!lst)
		return (NULL);
	lst->nb = nb;
	lst->next = NULL;
	return (lst);
}
