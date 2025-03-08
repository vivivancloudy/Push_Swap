/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:02:10 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/28 12:13:24 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>
// void	print_list_element(void *content)
// {
// 	if (content)
// 		printf("%s\n", (char *)content);
// }
// #include <string.h>
// int		main(void)
// {
// 	t_list	*list = ft_lstnew(strdup("Node 1"));
// 	t_list	*node2 = ft_lstnew(strdup("Node 2"));
// 	t_list	*node3 = ft_lstnew(strdup("Node 3"));

// 	if (!list || !node2 || !node3)
// 	{
// 		printf("failed\n");
// 		return (1);
// 	}

// 	list->next = node2;
// 	node2->next = node3;

// 	ft_lstiter(list, print_list_element);

// 	ft_lstdelone(list, free);
// 	ft_lstdelone(node2, free);
// 	ft_lstdelone(node3, free);
// 	return (0);
// }