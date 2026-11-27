/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 18:32:27 by dpivovar          #+#    #+#             */
/*   Updated: 2026/11/27 13:05:43 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last_found;
	unsigned char	searched_c;

	last_found = NULL;
	searched_c = (unsigned char)c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == searched_c)
			last_found = (char *)s;
		s++;
	}
	if (searched_c == '\0')
		return ((char *)s);
	return (last_found);
}
/*
#include <stdio.h>

int main(void)
{
	char s[] = "Test1Test123";
	char c = '1';

	printf("%s", ft_strrchr(s, c));
	return (0);
}
*/