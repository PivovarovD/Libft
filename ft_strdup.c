/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 23:57:36 by dpivovar          #+#    #+#             */
/*   Updated: 2026/11/16 15:12:48 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	length_str;
	char	*new_str;

	length_str = ft_strlen(s);
	new_str = (char *)malloc((length_str + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s, length_str + 1);
	return (new_str);
}
/*
#include <stdio.h>

int main(void)
{
	char	*new_str;
	char s1[] = "Test";
	char s2[] = "Hello \0 World";
	
	new_str = ft_strdup(s1);
	printf("%s\n", new_str);
	free(new_str);

	new_str = ft_strdup(s2);
	printf("%s\n", new_str);
	free(new_str);
	
	return (0);
}
*/
