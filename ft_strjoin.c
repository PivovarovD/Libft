/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 13:12:10 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-17 13:12:10 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length_s1;
	size_t	length_s2;
	char	*new_str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	length_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	new_str = (char *)malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s1, length_s1 + 1);
	ft_strlcpy(new_str + length_s1, s2, length_s2 + 1);
	return (new_str);
}
/*
#include <stdio.h>

int main(void)
{
	char s1[] = "Hello,";
	char s2[] = "World!";
	char *result = ft_strjoin(s1, s2);

	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return 0;
}
*/