/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:52:42 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/11 16:03:58 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*a;
	const unsigned char	*b;

	a = s1;
	b = s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
    char arr1[] = "Hello";
    char arr2[] = "Hello";
    char arr3[] = "Hellz";
    char arr4[] = "Hella";

    printf("ft_memcmp(arr1, arr2, 5) = %d\n", ft_memcmp(arr1, arr2, 5));
    printf("memcmp(arr1, arr2, 5) = %d\n", memcmp(arr1, arr2, 5));

    printf("ft_memcmp(arr1, arr3, 5) = %d\n", ft_memcmp(arr1, arr3, 5));
    printf("memcmp(arr1, arr3, 5) = %d\n", memcmp(arr1, arr3, 5));

    printf("ft_memcmp(arr1, arr4, 5) = %d\n", ft_memcmp(arr1, arr4, 5));
    printf("memcmp(arr1, arr4, 5) = %d\n", memcmp(arr1, arr4, 5));

    printf("ft_memcmp(arr1, arr3, 4) = %d\n", ft_memcmp(arr1, arr3, 4));
    printf("memcmp(arr1, arr3, 4) = %d\n", memcmp(arr1, arr3, 4));

    return 0;
}*/
