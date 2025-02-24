/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:23:06 by thdinh            #+#    #+#             */
/*   Updated: 2025/02/22 11:27:46 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef PUSHSWAP_H
# define PUSHSWAP_H

#include ".../libft/libft.h"

typedef struct s_list
{
    int data;
    struct s_list *next;
} t_list;

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
void rrr(t_list **stack_a, t_list **stack_b);
