/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 18:31:04 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-12 18:31:04 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_new;
	const unsigned char	*src_new;
	size_t				i;

	dest_new = (unsigned char *)dest;
	src_new = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_new[i] = src_new[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char src[] = "Hello";
	char dest[] = "Test!";
	
	printf("Before src = %s\n", src);
	printf("Before dest = %s\n", dest);
	ft_memcpy(dest, src, 2);
	printf("After src = %s\n", src);
	printf("After dest = %s\n", dest);
	return (0);
}
*/