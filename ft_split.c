/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 01:03:46 by dpivovar          #+#    #+#             */
/*   Updated: 2026/11/21 19:01:09 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words_quantity;
	int	in_word;

	words_quantity = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (*s != c && in_word == 0)
		{
			words_quantity++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (words_quantity);
}

static char	*get_word(char const *s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**free_all(char **result_array, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(result_array[i]);
		i++;
	}
	free(result_array);
	return (NULL);
}

static char	**fill_words(char **result_array, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			result_array[j] = get_word(&s[i], c);
			if (result_array[j] == NULL)
				return (free_all(result_array, j));
			j++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	result_array[j] = NULL;
	return (result_array);
}

char	**ft_split(char const *s, char c)
{
	char	**result_array;

	if (s == NULL)
		return (NULL);
	result_array = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (result_array == NULL)
		return (NULL);
	return (fill_words(result_array, s, c));
}

/*
#include <stdio.h>

int	main(void)
{
	char	**result_array;
	int		i;

	result_array = ft_split("...Hello.\n .42...school...", '.');
	if (result_array == NULL)
		return (1);
	i = 0;
	while (result_array[i] != NULL)
	{
		printf("[%d]: %s\n", i, result_array[i]);
		free(result_array[i]);
		i++;
	}
	free(result_array);
	return (0);
}
*/