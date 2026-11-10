/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-09 22:48:48 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-09 22:48:48 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] !='0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

#include <stdio.h>

int main(void)
{
	char dst[] = "";
	char src[] = "BBBBB";

	printf("Before src = %s\n", src);
	printf("Before dst = %s\n", dst);
	ft_strlcpy(dst, src, 6);
	printf("After src = %s\n", src);
	printf("After dst = %s\n", dst);
}

