/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 16:32:19 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-17 16:32:19 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start ++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	trimmed_str = (char *)malloc(((end - start) + 1) * sizeof(char));
	if (trimmed_str == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trimmed_str[i] = s1[start];
		start++;
		i++;
	}
	trimmed_str[i] = '\0';
	return (trimmed_str);
}
/*
#include <stdio.h>

int main(void)
{
	char s1[] = "  Spartak Moscow  ";
	char set[] = " ";
	char *result;

	result = ft_strtrim(s1, set);
	if (result != NULL)
	{
		printf("Result: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
// ft_strlcpy(trimmed_str, s1 + start, end - start + 1);
*/