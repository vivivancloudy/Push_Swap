/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:42:59 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/13 12:18:11 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char buffer[23] = "hello everyone Im Van";
	ft_bzero(buffer, 8);
	printf("%s\n", buffer);
	bzero(buffer, 9);
	printf("%s\n", buffer);
	return (0);
}*/
