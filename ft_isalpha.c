/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 18:30:32 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-12 18:30:32 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	int item;
	
	item = 'A';
	printf("Result is: %d\n", ft_isalpha(item));
	item = 'b';
	printf("Result is: %d\n", ft_isalpha(item));
	item = '!';
	printf("Result is: %d\n", ft_isalpha(item));
	return (0);
}
*/