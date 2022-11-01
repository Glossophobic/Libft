/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 02:57:45 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/11/01 01:37:09 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
// int main()
// {
// 	t_list	*node;
	
// 	node = ft_lstnew("content 1");
// 	ft_lstadd_back(&node, ft_lstnew("content 2"));
// 	ft_lstadd_back(&node, ft_lstnew("content 3"));
// 	ft_lstadd_back(&node, ft_lstnew("content 4"));
// 	ft_lstadd_back(&node, ft_lstnew("content 5"));
// 	printf("%d\n", ft_lstsize(node));
// 	while (node)
// 	{
// 		printf("%s\n", node->content);	
// 		node = node->next;
// 	}
// }