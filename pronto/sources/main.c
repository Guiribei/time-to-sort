/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:01:43 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/06 22:02:25 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*put_nb(int argc, char **argv)
{
	t_list	*head;
	int		i;

	head = NULL;
	i = 1;
	while (i < argc)
	{
		if (i == 1)
			head = ft_lstnew(ft_atoi(argv[i]));
		else
			ft_lstadd_back(&head, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	return (head);
}

static void	put_index(t_list *head)
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

t_list	*init_a(int argc, char **argv)
{
	t_list	*head_a;

	head_a = put_nb(argc, argv);
	put_index(head_a);
	return (head_a);
}

int	main(int argc, char **argv)
{
	t_list	*head_a;
	t_list	*head_b;

	if (argc < 2)
		return (1);
	check_argv(argc, argv);
	head_a = init_a(argc, argv);
	head_b = NULL;
	if (argc < 5)
		small_sort(&head_a, argc - 1);
	else
		if (!is_sorted(head_a))
			sort(&head_a, &head_b);
	ft_lstclear(&head_a);
	ft_lstclear(&head_b);
	return (0);
}
