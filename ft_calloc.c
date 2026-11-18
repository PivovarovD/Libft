/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 21:57:57 by dpivovar          #+#    #+#             */
/*   Updated: 2026/11/18 15:07:32 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
#include <stdio.h>

int	main(void) 
{
	int		*arr;
	void	*zero_ptr;
	void	*overflow_ptr;
	size_t	i;

	// 1. Проверка выделения и обнуления массива из 3 int 
	arr = (int *)ft_calloc(3, sizeof(int));
	if (arr == NULL)
		return (1);
	i = 0;
	while (i < 3)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
	free(arr);

	// 2. Проверка нулевых аргументов 
	zero_ptr = ft_calloc(0, 3);
	printf("zero_ptr (0, 3): %p\n", zero_ptr);
	free(zero_ptr);

	zero_ptr = ft_calloc(3, 0);
	printf("zero_ptr (3, 0): %p\n", zero_ptr);
	free(zero_ptr);

	// 3. Проверка переполнения
	overflow_ptr = ft_calloc(SIZE_MAX, 2);
	if (overflow_ptr == NULL)
		printf("Overflow test: OK (returned NULL)\n");
	else
	{
		printf("Overflow test: FAIL\n");
		free(overflow_ptr);
	}
	return (0);
}
*/
