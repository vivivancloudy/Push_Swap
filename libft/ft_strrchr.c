/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:55:43 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/13 10:13:00 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int     main(void)
{
        const char str[] = "Hello world";
        int     i = 'o';

        char *result = ft_strrchr(str, i);
        if (result)
            printf("Found character: %s\n", result);
        else
            printf("Character not found\n");

        result = strrchr(str, i);
        if (result)
            printf("Found character (strchr): %s\n", result);
        else
            printf("Character not found (strchr)\n");

        return 0;
}
*/
