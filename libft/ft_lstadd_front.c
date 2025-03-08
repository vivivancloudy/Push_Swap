/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:09:48 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/28 12:23:18 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int main(void)
{
    t_list  *list = NULL;
    t_list  *new_node1 = ft_lstnew("Node 1");
    t_list  *new_node2 = ft_lstnew("Node 2");
    t_list  *new_node3 = ft_lstnew("Node 3");

    ft_lstadd_front(&list, new_node1);
    ft_lstadd_front(&list, new_node2);
    ft_lstadd_front(&list, new_node3);
struct s_list	*next;
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
