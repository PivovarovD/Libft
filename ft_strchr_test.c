/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-11 16:49:12 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-11 16:49:12 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-11 15:24:45 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-11 15:24:45 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c_new;

	c_new = (unsigned char)c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == c_new)
			return ((char *)s);
		s++;
	}
	if (c_new == '\0')
		return ((char *)s);
	return (NULL);
}

#include <stdio.h>

int main(void)
{
	char s[] = "Test";
	char c = 'e';

	printf("%s", ft_strchr(s, c));
}
