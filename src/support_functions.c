/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:08:07 by thdinh            #+#    #+#             */
/*   Updated: 2025/03/08 14:11:01 by thdinh           ###   ########.fr       */
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

// Function to find the maximum element in the stack
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

// Function to check if a string is a valid number
int is_valid_number(char *str)
{
    int i = 0;

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

// Function to check if all elements in the stack are unique
int is_unique(t_list *stack)
{
    t_list *current;
    t_list *next;

    current = stack;
    while (current && current->next)
    {
        next = current->next;
        if (current->content == next->content) // Check for equality
        {
            return 0;  // Not unique
        }
        current = next;
    }
    return 1;  // Unique
}

// Function to check if the stack is sorted
int is_sorted(t_list **a, int count)
{
    t_list *temp;
    int i;

    if (!a || !(*a))  // Check for empty stack
        return (1);
    temp = *a;
    i = 0;
    while (temp->next && i < count - 1)
    {
        if (temp->index > temp->next->index)
            return (0);  // List is not sorted
        temp = temp->next;
        i++;
    }
    return (1);  // List is sorted
}
