/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:17:47 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/29 13:59:50 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numwords(char const *s, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			num++;
		i++;
	}
	return (num);
}

static void	free_allocated_words(char **result, int word_index)
{
	while (word_index >= 0)
	{
		free(result[word_index]);
		word_index--;
	}
	free(result);
}

static char	*allocated_words(const char *s, int start, int end)
{
	char	*word;

	word = malloc(sizeof(char) * (end - start + 2));
	if (word)
		ft_strlcpy(word, s + start, end - start + 2);
	return (word);
}

static int	split_words(char **result, char const *s, char c, int *word_index)
{
	int	start;
	int	end;

	start = 0;
	end = 0;
	while (s[end])
	{
		if (s[end] == c || s[end] == '\0')
			start = end + 1;
		if (s[end] != c && (s[end + 1] == c || s[end + 1] == '\0'))
		{
			result[*word_index] = allocated_words(s, start, end);
			if (!result[*word_index])
			{
				free_allocated_words(result, *word_index - 1);
				return (0);
			}
			(*word_index)++;
		}
		end++;
	}
	result[*word_index] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_index;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (numwords(s, c) + 1));
	if (!result)
		return (NULL);
	word_index = 0;
	if (!split_words(result, s, c, &word_index))
	{
		return (NULL);
	}
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char const *str = "xin chao moi nguoi";
// 	char c = ' ';
// 	char	**words = ft_split(str,c);
// 	if (words)
// 	{
// 		int	i = 0;
// 		while (words[i])
// 		{
// 			printf("%d:%s\n", i + 1, words[i]);
// 			free(words[i]);
// 			i++;
// 		}
// 		free(words);
// 	}
// 	return (0);
// }