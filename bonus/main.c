/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:35:08 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/20 20:40:26 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	read_cmd(t_list_bo **head_a, t_list_bo **head_b)
{
	int		flag;
	char	*gnl;
	char	*trim;

	flag = 0;
	while (flag != -1)
	{
		gnl = get_next_line(0);
		trim = ft_strtrim(gnl, "\n");
		free(gnl);
		if (trim == NULL)
			flag = -1;
		if (flag == -1)
			break ;
		checker(trim, head_a, head_b);
		free(trim);
	}
	free(trim);
}

int	get_cmd_nb(char **cmds)
{
	int	nb;

	nb = 0;
	while (*cmds != NULL)
	{
		cmds++;
		nb++;
	}
	return (nb);
}

int	is_sorted_bo(t_list_bo *head)
{
	while (head->next != NULL)
	{
		if (head->nb > head->next->nb)
			return (0);
		head = head->next;
	}
	return (1);
}

static t_list_bo	*put_nb(int argc, char **argv)
{
	t_list_bo	*head;
	int			i;

	head = NULL;
	i = 1;
	while (i < argc)
	{
		if (i == 1)
			head = ft_lstnew_bo(ft_atoi(argv[1]));
		else
			ft_lstadd_back_bo(&head, ft_lstnew_bo(ft_atoi(argv[i])));
		i++;
	}
	return (head);
}

int	main(int argc, char **argv)
{
	t_list_bo	*head_a;
	t_list_bo	*head_b;

	right_start(argc, argv);
	head_a = put_nb(argc, argv);
	head_b = NULL;
	read_cmd(&head_a, &head_b);
	if (is_sorted_bo(head_a) && head_b == NULL)
		write(1, "OK\n", 3);
	if (!is_sorted_bo(head_a) || head_b != NULL)
		write(1, "KO\n", 3);
	all_clear(&head_a, &head_b);
	return (0);
}
