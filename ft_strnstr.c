/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 15:14:18 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-13 15:14:18 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[i] != '\0' && (i < len))
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] != '\0'
				&& (i + j) < len
				&& (big[i + j] == little[j]))
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
	char big[] = "Test";
	char little[] = "t";

	printf("%s", ft_strnstr(big, little, 4));
	return (0);
}
*/