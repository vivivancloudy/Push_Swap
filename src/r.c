/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 10:58:14 by thdinh            #+#    #+#             */
/*   Updated: 2025/03/20 14:30:23 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void rotate(t_list **stack)
{
    t_list *tmp;
    t_list *last;

    if (!stack || !(*stack) || !(*stack)->next)
        return ;
    tmp = *stack;
    last = *stack;
    while (last->next)
        last = last->next;
    *stack = tmp->next;
    tmp->next = NULL;
    last->next = tmp;
}

void ra(t_list **stack_a)
{
    rotate(stack_a);
    ft_putstr_fd("ra\n", 1);
}

void rb(t_list **stack_b)
{
    rotate(stack_b);
    ft_putstr_fd("rb\n", 1);
}

void rr(t_list **stack_a, t_list **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    ft_putstr_fd("rr\n", 1);
}