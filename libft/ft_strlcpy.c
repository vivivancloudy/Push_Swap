/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:32:00 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/13 12:20:00 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length] != '\0')
		src_length++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src [i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_length);
}

/*#include <stdio.h>
int	main(void)
{
	char src[] = "lovely";
	char dest1[7];
	char dest2[5];

	ft_strlcpy(dest1, src, sizeof(dest1));
	printf("%s\n", dest1);
	ft_strlcpy(dest2, src, sizeof(dest2));
	printf("%s\n", dest2);
	return (0);
}*/
