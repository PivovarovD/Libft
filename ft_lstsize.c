/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-24 11:53:29 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-24 11:53:29 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
#include <stdio.h>

int main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	head = NULL;
	printf("Size: %u\n", ft_lstsize(head));

	node1 = ft_lstnew("One");
	node2 = ft_lstnew("Two");
	node3 = ft_lstnew("Three");

	ft_lstadd_front(&head, node1);
	printf("Size: %u\n", ft_lstsize(head));

	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	printf("Size: %u\n", ft_lstsize(head));

	printf("The first node of the linked list is: %s\n", (char *)head->content);

	free(head->next->next);
	free(head->next);
	free(head);
	return (0);
}
*/