/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 21:24:53 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-12 21:24:53 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_new;
	unsigned char		c_new;

	s_new = (const unsigned char *)s;
	c_new = (unsigned char)c;
	while (n > 0)
	{
		if (*s_new == c_new)
			return ((void *)s_new);
		s_new++;
		n--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
	char s[] = "Hello";
	char c = 'l';

	printf("%s", (char *)ft_memchr(s, c, 5));
	return (0);
}
*/