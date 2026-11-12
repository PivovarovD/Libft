/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 18:31:36 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-12 18:31:36 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_new;
	unsigned char	c_new;
	size_t			i;

	s_new = (unsigned char *)s;
	c_new = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		s_new[i] = c_new;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>

int main(void)
{
	char str[] = "Hello!";

	ft_memset(str, 'a', 6);
	printf("%s\n", str);
	// the memset function fills the memory with a constant byte
}
*/
