/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-22 19:34:31 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-22 19:34:31 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	// 1. Список пока пуст
	head = NULL;

	// 2. Создаём два отдельных узла в памяти
	node1 = ft_lstnew("One");
	node2 = ft_lstnew("Twoo");

	// 3. Делаем node1 началом списка
	head = node1;

	// 4. Ставим node2 ПЕРЕД node1 (в самое начало)
	ft_lstadd_front(&head, node2);

	// 5. Проверяем, кто теперь первый в списке
	printf("Now, the first one is: %s\n", (char *)head->content);
	printf("After it is: %s\n", (char *)head->next->content);

	// 6. Освобождаем память строго с конца к началу
	free(head->next);
	free(head);
	return (0);
}
*/