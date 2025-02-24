/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 10:58:14 by thdinh            #+#    #+#             */
/*   Updated: 2025/02/22 11:27:43 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void rotate(t_list **stack)
{
    t_list *first;
    t_list *last;

    if (!stack || !*stack || !((*stack)->next))
        return;
    first = *stack;
    last = *stack;

    while (last->next)
        last = last->next;
    *stack = first->next;
    first->next = NULL;
    last->next = first;
}

void ra(t_list **stack_a)
{
    rotate(stack_a);
    ft_putstr("ra\n");
}

void rb(t_list **stack_b)
{
    rotate(stack_b);
    ft_putstr("rb\n");
}

void rr(t_list **stack_a, t_list **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    ft_putstr("rr\n");
}