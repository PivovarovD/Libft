/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-25 14:00:13 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-25 14:00:13 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		next_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_node;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

static void	del_content(void *content)
{
	printf("Delete node content: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	t_list	*head;

	head = NULL;
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("One")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Two")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Three")));

	printf("The size of the list before cleaning: %u\n", ft_lstsize(head));

	ft_lstclear(&head, del_content);

	if (head == NULL)
		printf("The pointer 'head' successfully became NULL\n");

	printf("List size after cleaning: %u\n", ft_lstsize(head));

	return (0);
}
// cc -Wall -Wextra -Werror -fsanitize=address ft_lstclear.c 
// ft_lstadd_back.c ft_lstdelone.c ft_lstlast.c ft_lstnew.c 
// ft_lstsize.c ft_strdup.c ft_strlcpy.c ft_strlen.c
*/