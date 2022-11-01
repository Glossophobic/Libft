/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:27:41 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/11/01 02:28:01 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	fr(void *content)
// {
// 	free(content);
// 	printf("Freed From Desire\n");
// }

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
// int main()
// {
// 	t_list	*node;
	
// 	node = ft_lstnew(ft_strdup("content 1"));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content 2")));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content 3")));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content 4")));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content 5")));
// 	ft_lstclear(&node, fr);

// }