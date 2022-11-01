/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 01:07:19 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/11/01 01:37:00 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;  // same as (*node).content = content
	node->next = NULL;
	return (node);
}

// int main()
// {
// 	t_list	*node;
// 	node = ft_lstnew("string");
// 	printf("%p\n", node->content);
// }