/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:43:29 by thdinh            #+#    #+#             */
/*   Updated: 2025/03/20 14:37:05 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	list_size(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

int	find_min_index(t_list *a)
{
	t_list	*tmp;
	int		min_value;
	int		index;
	int		min_index;

	if (!a)
		return (-1);
	tmp = a;
	min_value = *(int *)(tmp->content);
	min_index = 0;
	index = 0;
	while (tmp)
	{
		if (*(int *)(tmp->content) < min_value)
		{
			min_value = *(int *)(tmp->content);
			min_index = index;
		}
		tmp = tmp->next;
		index++;
	}
	return (min_index);
}
void	sort_three(t_list **a)
{
	int	first;
	int	second;
	int	third;

	first = *(int *)((*a)->content);
	second = *(int *)((*a)->next->content);
	third = *(int *)((*a)->next->next->content);

	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

void	sort_five(t_list **a, t_list **b)
{
	int	min_index;

	min_index = find_min_index(*a);
	while (min_index != 0)
	{
		if (min_index <= 2)
			ra(a);
		else
			rra(a);
		min_index = find_min_index(*a);
	}
	pb(a, b);
	min_index = find_min_index(*a);
	while (min_index != 0)
	{
		if (min_index <= 2)
			ra(a);
		else
			rra(a);
		min_index = find_min_index(*a);
	}
	pb(a, b);
	sort_three(a);
	pa(a, b);
	pa(a, b);
}