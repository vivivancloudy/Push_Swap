/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:14:19 by thdinh            #+#    #+#             */
/*   Updated: 2025/02/26 15:08:35 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}

/*int main(void)
{
    t_list  *list = NULL;
    t_list  *new_node1 = ft_lstnew("Node 1");
    t_list  *new_node2 = ft_lstnew("Node 2");
    t_list  *new_node3 = ft_lstnew("Node 3");

    ft_lstadd_back(&list, new_node1);
    ft_lstadd_back(&list, new_node2);
    ft_lstadd_back(&list, new_node3);

    t_list *current = list;
    while (current)
    {
        printf("%s\n", (char *)current-> content);
        current = current->next;
    }
    free(new_node1);
    free(new_node2);
    free(new_node3);
    return (0);
}*/
