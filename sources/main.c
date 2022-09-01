/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:01:43 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/01 04:02:40 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_lst(t_list *head)
{
	t_list	*temp;

	temp = head;
	printf("Before:\n");
	printf("________________________________________\n\n");
	while (temp != NULL)
	{
		printf("nb: %d\nindex: %d \n\n", temp->nb, temp->index);
		temp = temp->next;
	}
	printf("________________________________________\n");
}

void	print_new_lst(t_list *head)
{
	t_list	*temp;

	temp = head;
	printf("After:\n");
	printf("________________________________________\n\n");
	while (temp != NULL)
	{
		printf("nb: %d\nindex: %d \n\n", temp->nb, temp->index);
		temp = temp->next;
	}
	printf("________________________________________\n");
}

int	main(int argc, char **argv)
{
	t_list	*head;

	if (argc < 2)
	{
		write(2, "Usage: ./push_swap num1 num2 num3 ...\n", 38);
		return (1);
	}
	check_argv(argc, argv);
	head = ft_lstnew((int)ft_atoi(argv[1]));
	init(head, argc, argv);
	print_lst(head);
	rra(&head);
	print_new_lst(head);
	return (0);
}
