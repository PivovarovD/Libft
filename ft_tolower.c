/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-10 18:29:37 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-10 18:29:37 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
	char c;

	c = 'B';
	printf("%c", ft_tolower(c));
	return (0);
}
*/
