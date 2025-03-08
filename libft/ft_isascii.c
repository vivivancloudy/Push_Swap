/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:20:44 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/11 11:25:52 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
int main(void)
{
    printf("ft_isascii(65) = %d\n", ft_isascii(65));  
    printf("ft_isascii(200) = %d\n", ft_isascii(200)); 
    printf("ft_isascii(127) = %d\n", ft_isascii(127));
    printf("ft_isascii(-5) = %d\n", ft_isascii(-5));  
}*/
