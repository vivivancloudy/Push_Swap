/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:19:25 by thdinh            #+#    #+#             */
/*   Updated: 2025/02/26 11:56:57 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void push(t_list **stack_a, t_list **stack_b)
{
    t_list *tmp;

    if (!stack_b|| !*stack_b)
        return;
    tmp = *stack_b;
    *stack_b = tmp->next;
    tmp->next = *stack_a;
    *stack_a = tmp;
}

void pa(t_list **stack_a, t_list **stack_b)
{
    push(stack_a, stack_b);
    ft_putstr_fd("pa\n", 1);
}

void pb(t_list **stack_a, t_list **stack_b)
{
    push(stack_b, stack_a);
    ft_putstr_fd("pb\n", 1);
}
