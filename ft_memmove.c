/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 19:43:25 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-06 19:43:25 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *dest_new;
	const unsigned char *src_new;

	dest_new = (unsigned char *) dest;
	src_new = (const unsigned char *) src;
	size_t i;
	if (dest < src)
	{
		i = 0; 
		while(i < n)
		{
			dest_new[i] = src_new[i];
			i++;
		}
	}
	else
	{
		while(n > 0)
		{
			dest_new[n - 1] = src_new[n - 1];
			n--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int main (void)
{
	char str[] = "ABCDEFG";
	
	printf("Before str = : %s\n", str);
	ft_memmove(str, str + 2, 3);
	printf("After str = : %s\n", str);

	// The memmove() function copies n bytes from memory area src to memory area dest.  
	// The memory areas may overlap: copying takes place as though the bytes in  src  are  first
    // copied  into  a  temporary array that does not overlap src or dest, and the bytes are
    // then copied from the temporary array to dest.
	//
	// Функция memmove() копирует n байт из области памяти src в область памяти dest. 
	// Эти области памяти могут пересекаться: копирование происходит так, как будто байты из src сначала копируются во временный массив, который не пересекается ни с src, ни с dest, а затем эти байты копируются из временного массива в dest.
}
*/