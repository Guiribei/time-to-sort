/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:10:13 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/01 02:17:43 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_nb(t_list *head, int argc, char **argv)
{
	int		i;

	i = 2;
	while (i < argc)
	{
		ft_lstadd_back(&head, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
}

void	put_index(t_list *head)
{
	t_list	*tmp;
	t_list	*aux;
	int		index;

	tmp = head;
	while (tmp)
	{
		index = 1;
		aux = head;
		while (aux)
		{
			if (tmp->nb > aux->nb)
				index++;
			aux = aux->next;
		}
		tmp->index = index;
		tmp = tmp->next;
	}
}

void	init(t_list *head, int argc, char **argv)
{
	put_nb(head, argc, argv);
	put_index(head);
}
