/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-10 12:33:23 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-10 12:33:23 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_length;
	size_t i;
		
	dst_length = ft_strlen(dst);
	if(size <= dst_length)
		return (size + ft_strlen(src));
	i = 0;
	while(src[i] != '\0' && (dst_length + i) < (size - 1))
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	dst[dst_length + i] = '\0';
	return (dst_length + ft_strlen(src));
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