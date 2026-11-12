/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 18:31:17 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-12 18:31:17 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_new;
	const unsigned char	*src_new;
	size_t				i;

	dest_new = (unsigned char *) dest;
	src_new = (const unsigned char *) src;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			dest_new[i] = src_new[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			dest_new[n - 1] = src_new[n - 1];
			n--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int main (void)
{
	char str[] = "ABCDEFG";
	
	printf("Before str = : %s\n", str);
	ft_memmove(str, str + 2, 3);
	printf("After str = : %s\n", str);
	return (0);
}
*/