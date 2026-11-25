/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-25 00:51:42 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-25 00:51:42 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	head = NULL;
	node1 = ft_lstnew("One");
	ft_lstadd_back(&head, node1);
	printf("First node: %s\n", (char *)head->content);

	node2 = ft_lstnew("Two");
	ft_lstadd_back(&head, node2);
	printf("Second node: %s\n", (char*)head->next->content);

	node3 = ft_lstnew("Three");
	ft_lstadd_back(&head, node3);
	printf("Third node: %s\n", (char *)head->next->next->content);

	free(head->next->next);
	free(head->next);
	free(head);
	return (0);
}
*/