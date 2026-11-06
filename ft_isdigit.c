/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-29 20:38:57 by dpivovar          #+#    #+#             */
/*   Updated: 2026-10-29 20:38:57 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main (void)
{
	int item;

	item = '1';
	printf("%d\n", ft_isdigit(item));
	item = 'A';
	printf("%d\n", ft_isdigit(item));
	item = '-';
	printf("%d\n", ft_isdigit(item));
	return (0);
}
*/