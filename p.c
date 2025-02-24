/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:19:25 by thdinh            #+#    #+#             */
/*   Updated: 2025/02/22 11:27:46 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list push(t_list **stack_a, t_list **stack_b)
{
    t_list *tmp;

    if (!stack_b|| !*stack_b)
        return ;
    tmp = *stack_b;
    *stack_b = tmp->next;
    tmp->next = *stack_a;
    *stack_a = tmp;
}

void pa(t_list **stack_a, t_list **stack_b)
{
    push(stack_a, stack_b);
    ft_putstr("pa\n");
}

void pb(t_list **stack_a, t_list **stack_b)
{
    push(stack_b, stack_a);
    ft_putstr("pb\n");
}