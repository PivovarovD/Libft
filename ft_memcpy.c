/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-05 14:33:20 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-05 14:33:20 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *dest_new;
	const unsigned char *src_new;
	
	dest_new = (unsigned char *) dest;
	src_new = (const unsigned char *) src;
	size_t i;
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

	// memcpy copies a block of memory from one location to another
	// The  memcpy()  function copies n bytes from memory area src to memory area dest.  
	// The memory areas must not overlap.  Use memmove(3) if the memory areas do overlap.
	//
	// Функция  memcpy()  копирует n байт из области памяти src в область памяти dest.  
	// Эти области памяти не должны пересекаться.  Если области памяти пересекаются, следует использовать memmove(3).
}
*/