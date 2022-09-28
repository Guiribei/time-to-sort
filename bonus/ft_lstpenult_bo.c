/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpenult_bo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 02:21:30 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/20 20:39:14 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_bo	*ft_lstpenult_bo(t_list_bo *lst)
{
	if (!lst)
		return (0);
	while (lst->next && lst->next->next != NULL)
		lst = lst->next;
	return (lst);
}
