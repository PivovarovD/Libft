/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 16:21:23 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-12 16:21:23 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	*tmp;
	unsigned char	c_new;
	
	tmp = NULL;
	c_new = (unsigned char)c;
	
	while (*s != '\0')
	{
		if ((unsigned char)*s == c_new)
			tmp = (char *)s;
		s++;
	}
	if (c_new == '\0')
		return ((char *)s);
	return (tmp);
}
/*
#include <stdio.h>

int main(void)
{
	char s[] = "Test1Test123";
	char c = '1';

	printf("%s", ft_strrchr(s, c));
}
*/