/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:30:45 by thdinh            #+#    #+#             */
/*   Updated: 2025/03/08 14:16:32 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void push_to_b(t_list **a, t_list **b, t_sort *sort)
{
    int size;
    int i;

    size = ft_lstsize(*a);
    i = 0;
    while (i < size)
    {
        if (*a && (*a)->index <= sort->mid)
            pb(a, b);
        else
        {
            if (*b && ft_lstsize(*b) > 1 && (*b)->index < (sort->mid / 2))
                rr(a, b);
            else if (*a)
                ra(a);
        }
        i++;
    }
    sort->max = sort->mid;
    sort->mid = (sort->max - sort->next) / 2 + sort->next;
}

// Function to move the next element to stack a
void move_next_to_a(t_list **a, t_list **b, t_sort *sort)
{
    if (!a || !b || !*a || !*b)
        return;  // Base case to stop recursion when either list is empty

    if (*b && (*b)->index == sort->next)
        pa(a, b);
    else if ((*a)->index == sort->next)
    {
        (*a)->flag = -1;
        ra(a);
        sort->next++;
    }
    else if (*b && ft_lstlast(*b) && ft_lstlast(*b)->index == sort->next)
        rrb(b);
    else if ((*a)->next && (*a)->next->index == sort->next)
        sa(a);
    else
        return;

    move_next_to_a(a, b, sort);  // Recursive call with safe stopping condition
}

// Function to sort elements in stack a
void sort_stack_a(t_list **a, t_list **b, t_sort *sort)
{
    int count;
    int i;

    count = ft_lstsize(*b);
    i = 0;
    while (i < count)
    {
        if (*b && (*b)->index == sort->next)
            move_next_to_a(a, b, sort);
        else if (*b && (*b)->index == sort->mid)
        {
            (*b)->flag = sort->flag;
            pa(a, b);
        }
        else if (*b)
            rb(b);
        i++;
    }
    sort->max = sort->mid;
    sort->mid = (sort->max - sort->next) / 2 + sort->next;
    sort->flag++;
}

// Function to sort elements in stack b
void sort_stack_b(t_list **a, t_list **b, t_sort *sort)
{
    int current_flag;

    if (!a || !b || !*a)
        return;

    current_flag = (*a)->flag;
    while (*a && (*a)->flag == current_flag)
    {
        if ((*a)->index != sort->next)
            pb(a, b);
        move_next_to_a(a, b, sort);
    }
    if (*b && ft_lstsize(*b) > 0)
        sort->max = find_max_lst(b)->index;
    sort->mid = (sort->max - sort->next) / 2 + sort->next;
}

// Main quicksort function to sort the entire stack
void quicksort(t_list **a, t_list **b, int count)
{
    t_sort sort;

    sort.next = find_min_lst(a)->index;
    sort.max = find_max_lst(a)->index;
    sort.mid = (sort.max + sort.next) / 2;  // Using a more balanced pivot
    sort.flag = 0;

    push_to_b(a, b, &sort);

    while (!is_sorted(a, count) && count > 1)
    {
        if (ft_lstsize(*b) == 0)
            sort_stack_b(a, b, &sort);
        else
            sort_stack_a(a, b, &sort);
    }
}

