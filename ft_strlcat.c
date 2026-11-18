/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 18:31:55 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-12 18:31:55 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_length;
	size_t	dst_length;
	size_t	i;

	src_length = ft_strlen(src);
	dst_length = 0;
	while (dst_length < size && dst[dst_length])
		dst_length++;
	if (dst_length == size)
		return (size + src_length);
	i = 0;
	while (src[i] && (dst_length + i) < (size - 1))
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	dst[dst_length + i] = '\0';
	return (dst_length + src_length);
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