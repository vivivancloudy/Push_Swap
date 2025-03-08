/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:54:45 by thdinh            #+#    #+#             */
/*   Updated: 2025/03/08 13:51:50 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int is_unique(t_list *stack, int num);
int	is_valid(char *str);

int parse_input(t_list **stack, char **argv, int argc)
{
    int     i;
    long    value;

    i = 1;
    while (i < argc)
    {
        if (!is_valid_number(argv[i]) || !is_unique(*stack, ft_atoi(argv[i])))
            return (0);
        value = ft_atoi(argv[i]);
        if (value < INT_MIN || value > INT_MAX)
            return (0);
        ft_lstadd_back(stack, ft_lstnew((void *)value));
        i++;
    }
    return (1);
}


void	assign_indices(t_list *stack)
{
    t_list	*current;
    t_list	*smallest;
    int		index;

    index = 0;
    while (1)
    {
        current = stack;
        smallest = NULL;
        while (current)
        {
            if (current->index == -1 && (!smallest || *(int *)(current->content) < *(int *)(smallest->content)))
                smallest = current;
            current = current->next;
        }
        if (!smallest)
            break;
        smallest->index = index++;
    }
}

void	print_stack(t_list *stack)
{
	while (stack)
	{
		ft_putnbr_fd(*(int *)(stack->content), 1);
		ft_putchar_fd('\n', 1);
		stack = stack->next;
	}
}

void	free_stack(t_list **stack)
{
	t_list	*temp;

	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	if (argc < 2)
		return (0);
	a = NULL;
	b = NULL;
	if (!parse_input(&a, argv, argc))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	assign_indices(a);
	quicksort(&a, &b, ft_lstsize(a));
	print_stack(a);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
