/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:04:19 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/26 16:39:35 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

/*void    del(void *content)
{
    free(content);
}

void    print_node(t_list *lst)
{
    while(lst)
    {
        printf("NUMBER: %s\n", ((char *) lst->content));
        lst = lst->next;
    }
}


int main(void)
{
    char *n1 = strdup("1");
    char *n2 = strdup("2");
    char *n3 = strdup("3");

    
    t_list  *list = ft_lstnew(n1);
    t_list  *node1 = ft_lstnew(n2);
    t_list  *node2 = ft_lstnew(n3);

    if (!list || !node1 || !node2)
    {
        printf("Failed\n");
        return (1);
    }

    list->next = node1;
    node1->next = node2;

    printf("List before:\n");
    print_node(list);
    ft_lstclear(&list, del);
    printf("List after\n");
    print_node(list);

    if (list == NULL)
    {
        printf("cleared\n");        
    }
    else
    {
        printf("not cleared\n");
    }
    return (0);
}*/
