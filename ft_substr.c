/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:48:54 by dpivovar          #+#    #+#             */
/*   Updated: 2026/11/16 20:12:59 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	s_length;
	size_t	i;

	if (s == NULL)
		return (NULL);
	s_length = ft_strlen(s);
	if (start >= s_length)
		len = 0;
	else if (len > s_length - start)
		len = s_length - start;
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
/*
#include <stdio.h>

int main(void)
{
	char s[] = "SpartakMoscow";
	unsigned int start = 7;
	size_t len = 6;
	char *result;

	result = ft_substr(s, start, len);
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

// ft_strlcpy(sub_str, s + start, len + 1);
*/