/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpenult.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 02:21:30 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/01 03:29:53 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstpenult(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next && lst->next->next != NULL)
		lst = lst->next;
	return (lst);
}
