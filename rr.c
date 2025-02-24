/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:10:20 by thdinh            #+#    #+#             */
/*   Updated: 2025/02/22 11:27:45 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void reverse_rotate(t_list **stack)
{
    t_list *prev;
    t_list *last;

    if (!stack || !*stack || !(*stack)->next)
        return;
    prev = NULL;
    last = *stack;
    while (last ->next)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL;
    last->next = *stack;
    *stack = last;
}

void rra(t_list **stack_a)
{
    reverse_rotate(stack_a);
    ft_putstr("rra\n");
}

void rrb(t_list **stack_b)
{
    reverse_rotate(stack_b);
    ft_putstr("rrb\n");
}

void rrr(t_list **stack_a, t_list **stack_b)
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    ft_putstr("rrr\n");
}