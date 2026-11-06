/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-29 20:38:50 by dpivovar          #+#    #+#             */
/*   Updated: 2026-10-29 20:38:50 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
	if(c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	int item;

	item = 49;
	printf("%d\n", ft_isascii(item));
	item = 128;
	printf("%d\n", ft_isascii(item));
	return (0);
}
*/