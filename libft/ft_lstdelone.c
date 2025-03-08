/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:42:26 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/26 16:26:09 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*void    del(void *content)
{
    free(content);
}

int main(void)
{
    t_list  *list = ft_lstnew(malloc(10));
    t_list  *node1 = ft_lstnew(malloc(10));
    t_list  *node2 = ft_lstnew(malloc(10));
    if (!(list || node1 || node2))
    {
        printf("failed\n");
        return (1);
    }
    list->next = node1;
    node1->next = node2;

    ft_lstdelone(node1, del);
    list->next = node2;
    t_list  *current = list;
    while (current)
    {
        printf("node content: %p\n", current->content);
        current = current->next;
    }

    ft_lstdelone(list, del);
    ft_lstdelone(node2, del);

    return (0);
}*/
