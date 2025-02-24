/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:43:29 by thdinh            #+#    #+#             */
/*   Updated: 2025/02/24 17:05:04 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_three(t_list **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;

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

// void	sort_five(t_list **a, t_list **b)
// {
// 	int	min_index;

// 	min_index = find_min_index(*a);
// 	while (min_index != 0)
// 	{
// 		if (min_index <= 2)
// 			ra(a);
// 		else
// 			rra(a);
// 		min_index = find_min_index(*a);
// 	}
// 	pb(a, b);
// 	min_index = find_min_index(*a);
// 	while (min_index != 0)
// 	{
// 		if (min_index <= 2)
// 			ra(a);
// 		else
// 			rra(a);
// 		min_index = find_min_index(*a);
// 	}
// 	pb(a, b);
// 	sort_three(a);
// 	pa(a, b);
// 	pa(a, b);
// }
