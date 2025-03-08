/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:44:35 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/26 15:53:07 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	inc_index(unsigned int i, char *c)
// {
// 	*c += i;
// }

// int	main(void)
// {
// 	char str[] = "bcdef";
// 	ft_striteri(str, inc_index);
// 	printf("%s\n", str);
// 	return (0);
// }
