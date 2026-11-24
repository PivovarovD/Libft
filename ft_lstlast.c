/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-24 19:59:07 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-24 19:59:07 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*last;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	head = NULL;
	last = ft_lstlast(head);
	if (last == NULL)
		printf("Last node: NULL\n");

	node1 = ft_lstnew("One");
	head = node1;
	last = ft_lstlast(head);
	if (last->next == NULL)
		printf("Last node: %s\n", (char *)last->content);

	node2 = ft_lstnew("Two");
	ft_lstadd_front(&head, node2);
	node3 = ft_lstnew("Three");
	ft_lstadd_front(&head, node3);
	last = ft_lstlast(head);
	if (last->next == NULL)
		printf("Last node: %s\n", (char *)last->content);
	free(head->next->next);
	free(head->next);
	free(head);

	return (0);
}
*/