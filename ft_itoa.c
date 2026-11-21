/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-20 21:07:45 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-20 21:07:45 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long num)
{
	int	len;

	len = 0;
	if (num == 0)
		len++;
	if (num < 0)
	{
		len++;
		num = num * (-1);
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*str;
	int		len;

	num = n;
	len = num_len(num);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = num * (-1);
	}
	while (num > 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	int n = -12345;
	char *result = ft_itoa(n);
	if (result != NULL)
	{
		printf("String: %s\n", result);
		free(result);
	}
	else
		printf("Unsuccessful allocation.\n");
	return (0);
}
*/