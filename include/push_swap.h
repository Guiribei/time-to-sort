/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:38:10 by guribeir          #+#    #+#             */
/*   Updated: 2022/09/01 17:52:15 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				nb;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	void			*content;
	struct s_list	*next;
}	t_list;

t_list			*ft_lstnew(int nb);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstpenult(t_list *lst);
int				ft_lstsize(t_list *lst);
int				comparing(int argc, char **argv);
int				ft_numcmp(int nb1, int nb2);
int				ft_isdigit(int c);
long long int	ft_atoi(const char *nptr);
void			size_check(char **argv);
void			check_argv(int argc, char **argv);
void			init(t_list *head, int argc, char **argv);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
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

#endif