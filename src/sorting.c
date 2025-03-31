/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:30:45 by thdinh            #+#    #+#             */
/*   Updated: 2025/03/20 14:34:10 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void push_to_b(t_list **a, t_list **b, t_sort *sort)
{
    int count;
    int i;

    count = ft_lstsize(*a);
    i = 0;
    while (i < count)
    {
        if (*a && (*a)->index == sort->next)
        {
            pb(a, b);
            break;
        }
        else if (*a)
            ra(a);
        i++;
    }
    sort->next++;
    sort->max = sort->mid;
    sort->mid = (sort->max - sort->next) / 2 + sort->next;
}
void move_next_to_a(t_list **a, t_list **b, t_sort *sort)
{
    int count;
    int i;

    if (!b || !*b)
        return;

    count = ft_lstsize(*b);
    i = 0;
    while (i < count)
    {
        if (*b && (*b)->index == sort->next)
        {
            (*b)->flag = sort->flag;
            pa(a, b);
            break;
        }
        else if (*b)
            rb(b);
        i++;
    }
    sort->next++;
    sort->max = sort->mid;
    sort->mid = (sort->max - sort->next) / 2 + sort->next;
}

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

void sort_stack_b(t_list **a, t_list **b, t_sort *sort)
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

void quicksort(t_list **a, t_list **b, int count)
{
    t_sort sort;

    if (!a || !*a)
        return;

    sort.next = 0;
    sort.max = find_max_lst(a)->index;
    sort.mid = (sort.max - sort.next) / 2 + sort.next;
    sort.flag = 0;

    while (sort.next < sort.max)
    {
        push_to_b(a, b, &sort);
        sort_stack_a(a, b, &sort);
        sort_stack_b(a, b, &sort);
    }
    move_next_to_a(a, b, &sort);
    if (ft_lstsize(*b) > 0)
        quicksort(b, a, count);
}
