/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-30 20:10:11 by dpivovar          #+#    #+#             */
/*   Updated: 2026-10-30 20:10:11 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *s_new = (unsigned char *)s;
	unsigned char c_new = (unsigned char)c;

	size_t i;

	i = 0;
	while (i < n)
	{
		s_new[i] = c_new;
		i++;
	}

	return (s);
}

/*
int main(void)
{
	char str[] = "Hello!";

	ft_memset(str, 'a', 6);
	printf("%s\n", str);
	// the memset function fills the memory with a constant byte
}
*/
