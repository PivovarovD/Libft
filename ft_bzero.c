/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-03 14:30:45 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-03 14:30:45 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *s_new = (unsigned char *)s;
	
	while (n > 0)
	{
		*s_new = '\0';
		s_new++;
		n--;
	}
}

/*
int	main(void)
{
	char str[] = "TestTest";
	printf("%s\n", str);
	ft_bzero(str, 8);
	printf("%s\n", str);
}
*/