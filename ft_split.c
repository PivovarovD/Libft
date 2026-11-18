/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 01:03:46 by dpivovar          #+#    #+#             */
/*   Updated: 2026/11/18 23:14:02 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// этап 2
static int count_words (char const *s, char c)
{
	int	word_quantity;
	int	in_word;

	word_quantity = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (*s != c && in_word == 0)
			{
				word_quantity++;
				in_word = 1;
			}
		if (*s == c)
			in_word = 0;		
		s++;
	}
	return (word_quantity);
}

static char *word_dup(char const *start, int len)
{
	char	*word;
	int		i;

	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

free_all(char **arr, int count)
{
	
	
}

char	**ft_split(char const *s, char c)
{
	int		word_quantity;
	char	**result_array;
	int		i;
	int		j;
	int		len;

// этап 1
	if (s == NULL)
		return (NULL);
		
	
	
	
// этап 3
	word_quantity = count_words(s, c);
	result_array = malloc((word_quantity + 1) * sizeof(char *));
	if (result_array == NULL)
		return (NULL);

	


// этап 4
	while (*s != '\0')
	{

		
	}
		
		
	// i = 0;
	// j = 0;
	// while (s[i] != '\0')
	// {
	// 	while (s[i] != '\0' && s[i] == c)
	// 	{
	// 		i++;
	// 	}
	// 	if (s[i] == '\0');
	// 		break;
	// 	len = 0;
	// 	while (s[i + len] && s[i + len] != c)
	// 		len++;
	// 	result_array[j] = word_dup(&s[i], len);
	// 	if (result_array[j] == NULL)
	// 	{#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words++;
		while (*s != c && *s)
			s++;
	}
	return (words);
}

static void	*free_all(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static char	**fill_words(char **res, char const *s, char c)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			i = 0;
			while (s[i] && s[i] != c)
				i++;
			res[j] = ft_substr(s, 0, i);
			if (!res[j])
				return (free_all(res));
			j++;
			s += i;
		}
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	return (fill_words(res, s, c));
}

/*
int	main(void)
{
	char	**words;
	size_t	i;

	words = ft_split("ola,mundo,libft", ',');
	if (!words)
		return (1);
	i = 0;
	while (words[i])
	{
		ft_putendl_fd(words[i], 1);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}*/
// cc -Wall -Wextra -Werror *.c -o test_ft_split
	// 		free_all(result_array, j);
	// 		return (NULL);
	// 	}
	// 	i = i + len;
	// 	j++;
	// }
	// result_array[j] = NULL;	

	
	
	return (result_array);
}




#include <stdio.h>

int main(void)
{
	char const	s[] = ",,,Spartak,,,Moscow,,,";
	char		c;

	c = ',';

	printf("%d", count_words(s, c));

	return (0);
}






///////////

/*
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words++;
		while (*s != c && *s)
			s++;
	}
	return (words);
}

static void	*free_all(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static char	**fill_words(char **res, char const *s, char c)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			i = 0;
			while (s[i] && s[i] != c)
				i++;
			res[j] = ft_substr(s, 0, i);
			if (!res[j])
				return (free_all(res));
			j++;
			s += i;
		}
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	return (fill_words(res, s, c));
}

/*
int	main(void)
{
	char	**words;
	size_t	i;

	words = ft_split("ola,mundo,libft", ',');
	if (!words)
		return (1);
	i = 0;
	while (words[i])
	{
		ft_putendl_fd(words[i], 1);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}*/
// cc -Wall -Wextra -Werror *.c -o test_ft_split

*/