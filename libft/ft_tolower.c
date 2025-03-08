/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:57:20 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/11 12:00:11 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*#include <stdio.h>
int main(void)
{
    printf("ft_tolower('A') = %c\n", ft_tolower('A'));
    printf("ft_tolower('Z') = %c\n", ft_tolower('Z'));
    printf("ft_tolower('a') = %c\n", ft_tolower('a'));
    printf("ft_tolower('z') = %c\n", ft_tolower('z'));
    printf("ft_tolower('1') = %c\n", ft_tolower('1'));
    printf("ft_tolower(' ') = %c\n", ft_tolower(' '));
    printf("ft_tolower('@') = %c\n", ft_tolower('@'));
    return 0;
}*/
