/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:18:52 by thdinh            #+#    #+#             */
/*   Updated: 2024/12/04 10:58:20 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char) c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

/*#include <stdio.h>
#include <string.h>

// ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t				i;

int     main(void)
{
        const char str[] = "Hello world";
        int     i = 'w';

// ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t				i;
        char *result = ft_strchr(str, i);
        if (result)
            printf("Found character: %s\n", result);
        else
            printf("Character not found\n");

        result = strchr(str, i);
        if (result)
            printf("Found character (strchr): %s\n", result);
        else
            printf("Character not found (strchr)\n");

        return 0;
}*/
