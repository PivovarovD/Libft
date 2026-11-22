/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-22 16:57:33 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-22 16:57:33 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
#include <stdio.h>

int main(void)
{
	t_list	*new_node;
	char	*str;

	str = "Hello, 42!";
	new_node = ft_lstnew(str);
	if (new_node == NULL)
	{
		printf("Unsuccessful memory allocation\n");
		return (1);
	}
	printf("Content: %s\n", (char *)new_node->content);
	if (new_node->next == NULL)
		printf("Next node is: NULL\n");
	free(new_node);
	return(0);
}
*/