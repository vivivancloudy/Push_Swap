/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:08:40 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/13 15:33:06 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * size + 1);
	if (!dup)
		return (NULL);
	while (*s)
		dup[i++] = *s++;
	dup[i] = '\0';
	return (dup);
}

/*#include <string.h>

int	main(void)
{
	const char *test1;
	const char *dup1;
	test1 = "Hello world";
	dup1 = ft_strdup(test1);
	printf("%s\n", dup1);

	const char *test2;
	const char *dup2;
	test2 = "Im Van";
	dup2 = strdup(test2);
	printf("%s\n", dup2);
	return (0);
}*/
