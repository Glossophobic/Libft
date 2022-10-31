/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 01:07:19 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/25 00:36:51 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->content = content;  // same as (*head).content = content
	head->next = NULL;
	return (head);
}

// int main()
// {
// 	t_list	*node;
// 	node = ft_lstnew("string");
// 	printf("%p\n", node->content);
// 	printf("%p\n", node->next);
// }