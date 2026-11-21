/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-21 03:33:27 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-21 03:33:27 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if (s == NULL || f == NULL)
		return (NULL);

	size_t len = 0;
	while (s[len] != '\0')
		len++;

	char *result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (size_t i = 0; i < len; i++)
		result[i] = f(i, s[i]);

	result[len] = '\0';
	return (result);
}

#include <stdio.h>

int main(void)
{
	char *result = ft_strmapi("Hello, World!", [](unsigned int i, char c) {
		return (char)(c + 1); // Example transformation: increment each character
	});

	if (result != NULL)
	{
		printf("Result: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed or input was NULL.\n");
	}

	return 0;
}

