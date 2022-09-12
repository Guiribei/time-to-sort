/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:38:10 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/06 21:57:12 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_list
{
	int				nb;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_list	*next;
}	t_list;

t_list			*ft_lstnew(int nb);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstpenult(t_list *lst);
t_list			*init_a(int argc, char **argv);
int				ft_lstsize(t_list *lst);
int				comparing(int argc, char **argv);
int				ft_numcmp(int nb1, int nb2);
int				ft_numabs(int num);
int				ft_isdigit(int c);
int				is_sorted(t_list *head);
long long int	ft_atoi(const char *nptr);
void			size_check(char **argv);
void			check_argv(int argc, char **argv);
void			track_position(t_list **head);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_lstclear(t_list **lst);
void			best_instruction(t_list **head_a, t_list **head_b);
void			calculate_cost(t_list **head_a, t_list **head_b);
void			sort(t_list **head_a, t_list **head_b);
void			ajust_order(t_list **head_a);
void			small_sort(t_list **head, int nums);
void			pa(t_list **head1, t_list **head2);
void			pb(t_list **head1, t_list **head2);
void			sa(t_list **head);
void			sb(t_list **head);
void			ss(t_list **head1, t_list **head2);
void			ra(t_list **head);
void			rb(t_list **head);
void			rr(t_list **head1, t_list **head2);
void			rra(t_list **head);
void			rrb(t_list **head);
void			rrr(t_list **head1, t_list **head2);
void			exec_instruct(t_list **head_a, t_list **head_b, \
int cost_a, int cost_b);

#endif