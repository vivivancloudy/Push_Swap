/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:47:57 by thdinh            #+#    #+#             */
/*   Updated: 2025/02/26 15:04:13 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int main(void)
{
    t_list  *list = NULL;
    t_list  *new_node1 = ft_lstnew("Node 1");
    t_list  *new_node2 = ft_lstnew("Node 2");
    t_list  *new_node3 = ft_lstnew("Node 3");

    ft_lstadd_front(&list, new_node3);
    ft_lstadd_front(&list, new_node2);
    ft_lstadd_front(&list, new_node1);

    t_list  *last_node = ft_lstlast(list);
    if (last_node)
    {
        printf("Last node: %s\n", (char *)last_node->content);
    }
    else
    {
        printf("empty\n");
    }

    free(new_node1);
    free(new_node2);
    free(new_node3);
    return (0);
}*/
