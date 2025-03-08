/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:16:21 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/25 15:44:54 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*int main(void)
{
    printf("ft_isalnum('A') = %d\n", ft_isalnum('A'));  
    printf("ft_isalnum('5') = %d\n", ft_isalnum('5'));  
    printf("ft_isalnum('$') = %d\n", ft_isalnum('$'));  
    printf("ft_isalnum('g') = %d\n", ft_isalnum('g')); 
    printf("ft_isalnum(' ') = %d\n", ft_isalnum(' '));  
}*/
