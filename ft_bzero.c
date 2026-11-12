/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 18:29:56 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-12 18:29:56 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_new;

	s_new = (unsigned char *)s;
	while (n > 0)
	{
		*s_new = '\0';
		s_new++;
		n--;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "TestTest";
	printf("%s\n", str);
	ft_bzero(str, 8);
	printf("%s\n", str);
}
*/