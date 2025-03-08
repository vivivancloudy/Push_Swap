/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:36:15 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/13 10:33:01 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big && !len)
		return (0);
	if (little[0] == '\0' || little == big)
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (big[i + j] == '\0' && little[j] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int main(void)
{
    char str[] = "Hello, world!";
    char to_find[] = "world";
    char to_find_not_in[] = "planet";

    printf("Test 1: Found within limit\n");
    printf("%s\n\n", ft_strnstr(str, to_find, 12));

    printf("Test 2: Not found within limit\n");
    printf("%s\n\n", ft_strnstr(str, to_find, 5));

    printf("Test 3: Search string not present\n");
    printf("%s\n\n", ft_strnstr(str, to_find_not_in, 12));

    printf("Test 4: Empty search string\n");
    printf("%s\n\n", ft_strnstr(str, "", 12));

    printf("Test 5: Limit larger than string\n");
    printf("%s\n", ft_strnstr(str, to_find, 20));
	return (0);
}*/
