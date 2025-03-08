/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:29:37 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/11 11:30:21 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include <stdio.h>
int main(void)
{
    printf("ft_isprint(65) = %d\n", ft_isprint(65)); 
    printf("ft_isprint(200) = %d\n", ft_isprint(200));
    printf("ft_isprint(127) = %d\n", ft_isprint(127));
    printf("ft_isprint(32) = %d\n", ft_isprint(32));
}*/
