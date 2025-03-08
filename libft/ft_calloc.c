/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:21:06 by thdinh            #+#    #+#             */
/*   Updated: 2024/12/04 11:07:02 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;
	size_t	i;

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}

#include <stdio.h>

int	main(void)
{
	size_t nmemb = 5;
	size_t size = sizeof(int);

	int *arr = (int *)ft_calloc(nmemb, size);
	int *arr1 = (int *)calloc(nmemb, size);
	if (arr == NULL)
	{
		printf("Failed\n");
		//return (1);
	}
	size_t i = 0;
	while (i < nmemb)
	{
		printf("arr[%zu] = %d\n", i , arr[i]);
		i++;
	}
	free (arr);
	if (arr1 == NULL)
	{
		printf("Failed\n");
		//return (1);
	}
	while (i < nmemb)
	{
		printf("arr1[%zu] = %d\n", i , arr1[i]);
		i++;
	}
	free (arr1);
	//return (0);
}

//ft_memset(arr, 0, nmemb * size);
