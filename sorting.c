// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   sorting.c                                          :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/02/24 11:30:45 by thdinh            #+#    #+#             */
// /*   Updated: 2025/02/24 13:35:31 by thdinh           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "pushswap.h"

// void	push_to_b(t_list **a, t_list **b, t_sort *sort)
// {
// 	int	size;
// 	int	i;

// 	size = ft_lstsize(*a);
// 	while (i < size)
// 	{
// 		if ((*a)-> index <= sort->mid)
// 			pb(a, b);
// 		else
// 		{
// 			if (ft_lstsize(*b) > 1 && (*b)-> index < (sort->mid / 2))
// 				rr(a, b);
// 			else
// 				ra(a);
// 		}
// 		i++;
// 	}
// 	sort->max = sort->mid;
// 	sort->mid = (sort->max - sort-> next) / 2 + sort-> next;
// }

// void	move_next_to_a(t_list **a, t_list **b, t_sort *sort)
// {
// 	if (*b && (*b)->index == sort->next)
// 		pa(a, b);
// 	else if ((*a)-> index == sort->next)
// 	{
// 		(*a)->flag = -1;
// 		ra(a);
// 		sort->next++;
// 	}
// 	else if (*b && ft_lstlast(*b)->index == sort->next)
// 		rrb(b);
// 	else if ((*a)->next && (*a)->next->index == sort->next)
// 		sa(a);
// 	else
// 		return;
// 	move_next_to_a(a, b, sort);
// }

// void	sort_stack_a(t_list **a, t_list **b, t_sort *sort)
// {
// 	int	count;
// 	int	i;

// 	count = ft_lstsize(*b);
// 	i = 0;
// 	while (i < count)
// 	{
// 		if ((*b)-> index == sort->next)
// 			move_next_to_a(a, b, sort);
// 		else if ((*b)->index == sort->mid)
// 		{
// 			(*b)->flag = sort->flag;
// 			pa(a, b);
// 		}
// 		else
// 			rb(b);
// 		i++;
// 	}
// 	sort->max = sort->mid;
// 	sort->mid = (sort->max - sort->next) / 2 + sort->next;
// 	sort->flag++;
// }

// void sort_stack_b(t_list **a, t_list **b, t_sort *sort)
// {
// 	int	current_flag;

// 	current_flag = (*a)->flag;
// 	while (*a && (*a)-> flag == current_flag)
// 	{
// 		if ((*a)->index != sort->next)
// 			pb(a, b);
// 		move_next_to_a(a, b, sort);
// 	}
// 	if (ft_lstsize(*b))
// 		sort->max = find_max_lst(b)->index;
// 	sort->mid = (sort->max - sort->next) / 2 + sort->next;
// }
// void	quicksort(t_list **a, t_list **b, int count)
// {
// 	t_sort	sort;
// 	sort.next = find_min_lst(a)->index;
// 	sort.max = find_max_lst(a)->index;
// 	sort.mid = (sort.max - sort.next)/2 + sort.next;
// 	sort.flag = 0;

// 	push_to_b(a, b, &sort);
// 	while (!is_sorted)
// }
