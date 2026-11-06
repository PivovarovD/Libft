/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-29 20:46:16 by dpivovar          #+#    #+#             */
/*   Updated: 2026-10-29 20:46:16 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
	if(c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	int item;

	item = '/';
	printf("%d\n", ft_isprint(item));
	item = 5;
	printf("%d\n", ft_isprint(item));
	return (0);
}
*/
