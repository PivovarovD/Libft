/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 14:10:48 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-13 14:10:48 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_new;
	const unsigned char	*s2_new;

	s1_new = (const unsigned char *)s1;
	s2_new = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*s1_new != *s2_new)
			return (*s1_new - *s2_new);
		s1_new++;
		s2_new++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char s1[] = "Test1";
	char s2[] = "Test0";
	printf("%d", ft_memcmp(s1, s2, 5));
	return (0);
}
*/