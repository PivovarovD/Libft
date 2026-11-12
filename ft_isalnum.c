/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 18:30:22 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-12 18:30:22 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	int item;

	item = 'A';
	printf("%d\n", ft_isalnum(item));
	item = 'b';
	printf("%d\n", ft_isalnum(item));
	item = '1';
	printf("%d\n", ft_isalnum(item));
	item = '/';
	printf("%d\n", ft_isalnum(item));
	return (0);
}
*/
