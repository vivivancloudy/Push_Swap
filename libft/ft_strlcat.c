/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:33:49 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/28 13:47:44 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < 1 || size <= dst_len)
	{
		return (size + src_len);
	}
	if (size > 0)
	{
		while (dst[i] != '\0')
			i++;
		while (src[j] != '\0' && j < size - dst_len - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
	}
	dst[i + j] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char dest[] = "You are ";
// 	char src[] = "amazing";
// 	ft_strlcat(dest, src, 20);
// 	printf("%s\n", dest);
// 	return (0);
// }