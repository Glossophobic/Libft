/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:28:50 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/11/01 03:27:09 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int main()
// {
// 	t_list	*node;
	
// 	node = ft_lstnew(ft_strdup("content 1"));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content 2")));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content 3")));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content 4")));
// 	ft_lstadd_back(&node, ft_lstnew(ft_strdup("content 5")));
// 	printf("%s\n", ft_lstlast(node)->content);
// }