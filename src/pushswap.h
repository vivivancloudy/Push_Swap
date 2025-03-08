/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:23:06 by thdinh            #+#    #+#             */
/*   Updated: 2025/02/26 12:03:31 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
# include "../libft/libft.h"

typedef struct s_sort
{
	int	max;
	int	mid;
	int	next;
	int	flag;
}	t_sort;

void sa(t_list **stack_a);
void sb(t_list **stack_b);
void ss(t_list **stack_a, t_list **stack_b);
void pa(t_list **stack_a, t_list **stack_b);
void pb(t_list **stack_a, t_list **stack_b);
void ra(t_list **stack_a);
void rb(t_list **stack_b);
void rr(t_list **stack_a, t_list **stack_b);
void rra(t_list **stack_a);
void rrb(t_list **stack_b);
void    rrr(t_list **stack_a, t_list **stack_b);
void	quicksort(t_list **a, t_list **b, int count);
void	push_to_b(t_list **a, t_list **b, t_sort *sort);
void	move_next_to_a(t_list **a, t_list **b, t_sort *sort);
void	sort_stack_a(t_list **a, t_list **b, t_sort *sort);
void	sort_stack_b(t_list **a, t_list **b, t_sort *sort);
void	sort_three(t_list **a);
void	sort_five(t_list **a, t_list **b);
int		is_valid_number(char *str);
int     find_min_index(t_list *a);
t_list	*find_min_lst(t_list **stack);
t_list	*find_max_lst(t_list **stack);
int		is_sorted(t_list **stack, int count);
void	free_stack(t_list **stack);

#endif
