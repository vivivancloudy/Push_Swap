/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:05:20 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/29 15:46:40 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*create_new_node(
	void *content, void *(*f)(void *), void (*del)(void *))
{
	void	*new_content;
	t_list	*new_node;

	new_content = f(content);
	if (!new_content)
		return (NULL);
	new_node = ft_lstnew(new_content);
	if (!new_node)
	{
		del(new_content);
		return (NULL);
	}
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = create_new_node(lst->content, f, del);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void    *increment(void *content)
// {
//     int *new_int = malloc(sizeof(int));
//     if (!new_int)
//         return (NULL);
//     *new_int = *(int *)content + 1;
//     return (new_int);
// }

// void    del(void *content)
// {
//     free (content);
// }

// #include <stdio.h>
// int main(void)
// {
//     int *a = malloc(sizeof(int));
//     int *b = malloc(sizeof(int));
//     int *c = malloc(sizeof(int));
//     if (!a || !b || !c)
//     {
//         printf("Memory allocation failed\n");
//         return (1);
//     }
//     *a = 1;
//     *b = 2;
//     *c = 5;

//     t_list *list = ft_lstnew(a);
//     t_list *node1 = ft_lstnew(b);
//     t_list *node2 = ft_lstnew(c);

//     if (!list || !node1 || !node2)
//     {
//         printf("Failed to create nodes\n");
//         return (1);
//     }

//     list->next = node1;
//     node1->next = node2;

//     t_list *new_list = ft_lstmap(list, increment, del);
//     t_list *current = new_list;
//     while (current)
//     {
//         printf("%d\n", *(int *)current->content);
//         current = current->next;
//     }

//     ft_lstclear(&new_list, del);
//     ft_lstclear(&list, del);

//     return (0);
// }