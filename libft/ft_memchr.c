/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:17:32 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/30 14:56:21 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const char str[] = "Hello World";
// 	int	i = 'W';

// 	char *result = ft_memchr(str, i, 10);
// 	if (result)
// 		printf("Found character: %s\n", result);
// 	else
// 		printf("Character not found\n");
// 	result = memchr(str, i, 10);
// 	if (result)
// 		printf("Found character: %s\n", result);
// 	else
// 		printf("Character not found\n");
// 	return (0);
// }