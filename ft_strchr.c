/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 18:31:44 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-12 18:31:44 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	searched_char;

	searched_char = (unsigned char)c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == searched_char)
			return ((char *)s);
		s++;
	}
	if (searched_char == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
	char s[] = "Test";
	char c = 's';

	printf("%s", ft_strchr(s, c));
	return (0);
}
*/