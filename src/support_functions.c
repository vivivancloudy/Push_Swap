/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:08:07 by thdinh            #+#    #+#             */
/*   Updated: 2025/03/20 14:11:19 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list *find_min_lst(t_list **stack)
{
    t_list *min;
    t_list *current;

    if (!stack || !(*stack))
        return (NULL);
    min = *stack;
    current = *stack;
    while (current)
    {
        if (current->index < min->index)
            min = current;
        current = current->next;
    }
    return (min);
}

t_list *find_max_lst(t_list **stack)
{
    t_list *max;
    t_list *current;

    if (!stack || !(*stack))
        return (NULL);
    max = *stack;
    current = *stack;
    while (current)
    {
        if (current->index > max->index)
            max = current;
        current = current->next;
    }
    return (max);
}

int is_valid_number(char *str)
{
    int i;

    i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if (!ft_isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

int is_unique(t_list *stack)
{
    t_list *current;
    t_list *temp;

    if (!stack)
        return (0);
    current = stack;
    while (current)
    {
        temp = current->next;
        while (temp)
        {
            if (current->index == temp->index)
                return (0);
            temp = temp->next;
        }
        current = current->next;
    }
    return (1);
}
int is_sorted(t_list **a, int count)
{
    t_list *current;
    int i;

    if (!a || !*a)
        return (0);
    current = *a;
    i = 0;
    while (current && current->next)
    {
        if (current->index > current->next->index)
            return (0);
        current = current->next;
        i++;
    }
    if (i == count - 1)
        return (1);
    return (0);
}
