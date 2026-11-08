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

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *dest_new = (unsigned char *) dest;
	const unsigned char *src_new = (const unsigned char *) src;

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
	if (dest > src)
	{
		i = 1;
		while(i < n)
		{
			dest_new[n-i] = src_new[n-i];
			i++;
		}
	}
	return (dest);
}

int main (void)
{
	/*Nice work putting this together! You've clearly implemented both the front-to-back and back-to-front logic. Let me give you a couple of things to trace through:

The back-to-front loop: You start with i = 1 and copy dest_new[n-i]. Walk through this with a small example—say n = 3. What indices get copied? Does the byte at index 0 ever get copied?

Both if statements: You use two separate if checks. What happens if dest == src? Also, could there be any edge concern about using if twice versus if/else?

Try tracing through the back-to-front case by hand with n = 3 and see which indices your loop touches. What do you notice?*/






	// The memmove() function copies n bytes from memory area src to memory area dest.  
	// The memory areas may overlap: copying takes place as though the bytes in  src  are  first
    // copied  into  a  temporary array that does not overlap src or dest, and the bytes are
    // then copied from the temporary array to dest.
	//
	// Функция memmove() копирует n байт из области памяти src в область памяти dest. 
	// Эти области памяти могут пересекаться: копирование происходит так, как будто байты из src сначала копируются во временный массив, который не пересекается ни с src, ни с dest, а затем эти байты копируются из временного массива в dest.
}