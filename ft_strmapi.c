/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 03:33:27 by dpivovar          #+#    #+#             */
/*   Updated: 2026/11/21 19:38:20 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	len;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	new_str = malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
char	test_func(unsigned int i, char c)
{
	if (i % 2 == 0 && (c >= 'A' && c <= 'Z'))
		return (c + 32);
	return (c);
} 

#include <stdio.h>

int main(void)
{
	char	*str = "HELLO";
	char	*new_str;
	
	new_str = ft_strmapi(str, test_func);
	if (new_str != NULL)
	{
		printf("str: %s\n", str);
		printf("new_str: %s\n", new_str);
		free(new_str);
	}
	return (0);
}
*/
