/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:54:24 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/11 15:00:33 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

/*void	printArray(char *arr, size_t n)
{
	size_t i = 0;
	while (i < n)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

#include <string.h>
int	main(void)
{
    char arr[10];
    ft_memset(arr, 65, 10);
    printf("Array after ft_memset:\n");
    printArray(arr, 10);

    char arr2[10];
    memset(arr2, 65, 10);  
    printf("Array after standard memset:\n");
    printArray(arr2, 10);

    return 0;
}*/
