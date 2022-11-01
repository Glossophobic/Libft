/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:12:20 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/11/01 02:17:58 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int main()
// {
// 	t_list	*node;
	
// 	node = ft_lstnew(ft_strdup("content 1"));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content 2")));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content 3")));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content 4")));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content 5")));
	
// 	ft_lstdelone(node->next->next, free);
// 	while (node)
// 	{
// 		printf("%s\n", node->content);
// 		node = node->next;
// 	}
// }