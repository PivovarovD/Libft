/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-11 15:24:45 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-11 15:24:45 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    unsigned char	c_new;
    int	i;

	c_new = (unsigned char) c;
    i = 0;
    while (s[i] != '\0')
    {
        if ((unsigned char)s[i] == c_new)
            return ((char *) &s[i]);
    	i++;
	}
	if (c_new == '\0')
		return ((char *) &s[i]);
	return (NULL);
}

#include <stdio.h>

int main(void)
{
	char s[] = "Test";
	char c = 's';

	printf("%s", ft_strchr(s, c));
}
