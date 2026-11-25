/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-25 10:03:18 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-25 10:03:18 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
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
	t_list	*node1;
	t_list	*node2;

	node1 = ft_lstnew(ft_strdup("One"));
	node2 = ft_lstnew(ft_strdup("Two"));

	ft_lstadd_back(&node1, node2);

	printf("First node: %s\n", (char *)node1->content);
	printf("Second node: %s\n", (char *)node2->content);

	ft_lstdelone(node1, del_content);
	printf("Second node exists and contains: %s\n", (char *)node2->content);

	ft_lstdelone(node2, del_content);
	return (0);
}
// cc -Wall -Wextra -Werror -fsanitize=address ft_lstdelone.c ft_lstnew.c 
// ft_lstadd_back.c ft_strdup.c ft_lstlast.c ft_strlcpy.c ft_strlen.c
*/