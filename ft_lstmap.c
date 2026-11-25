/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 18:40:25 by dpivovar          #+#    #+#             */
/*   Updated: 2026/11/25 21:18:51 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node1;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		node1 = ft_lstnew(content);
		if (node1 == NULL)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node1);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>

static void	*test_func(void *content)
{
	char	*str;

	str = ft_strdup((char *)content);
	if (str == NULL)
		return (NULL);
	printf("%s\n", str);
	return (str);
}

static void	del_content(void *content)
{
	printf("Delete node content: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	t_list	*node1;
	t_list	*new_list;

	node1 = ft_lstnew(ft_strdup("Test1"));
	ft_lstadd_back(&node1, ft_lstnew(ft_strdup("Test2")));
	ft_lstadd_back(&node1, ft_lstnew(ft_strdup("Test3")));
	new_list = ft_lstmap(node1, test_func, del_content);
	ft_lstclear(&node1, del_content);
	ft_lstclear(&new_list, del_content);
	return (0);
}
*/