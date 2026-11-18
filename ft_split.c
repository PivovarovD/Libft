/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-18 01:03:46 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-18 01:03:46 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	

}

#include <stdio.h>

int main(void)
{
	char s[] = "Hello,World,42";
	char c = ',';
	char **result;
	int i;

	result = ft_split(s, c);
	if (result != NULL)
	{
		i = 0;
		while (result[i] != NULL)
		{
			printf("Result[%d]: %s\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}