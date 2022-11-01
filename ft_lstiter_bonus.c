/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:32:30 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/11/01 02:09:01 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	fnc(void *content)
// {
// 	char *p = (char *)content;
// 	int i = 0;
// 	while (p[i])
// 	{
// 		p[i] -= 32;
// 		i++;
// 	}
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main()
// {
// 	t_list	*node;
	
// 	node = ft_lstnew(ft_strdup("content"));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content")));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content")));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content")));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content")));
	
// 	ft_lstiter(node, &fnc);
// 	while (node)
// 	{
// 		printf("%s\n", node->content);
// 		node = node->next;
// 	}
// }