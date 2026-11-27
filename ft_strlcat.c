/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 18:31:55 by dpivovar          #+#    #+#             */
/*   Updated: 2026/11/27 12:51:41 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (size + ft_strlen(src));
	j = 0;
	while (src[j] && (i + j) < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>

int main(void)
{
	char dst[100] = "Hello";
	char src[] = " World";

	printf("Before dst = %s\n", dst);
	ft_strlcat(dst, src, 20);
	printf("After dst = %s\n", dst);
	return (0);
}
*/