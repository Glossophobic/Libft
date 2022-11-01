/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:55:44 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/11/01 00:17:26 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst != NULL)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

// int main()
// {
// 	t_list	*list;
	
// 	list = ft_lstnew("node 0");
// 	ft_lstadd_back(&list, ft_lstnew("node 1"));
// 	printf("%s\n", list->content);
// 	printf("%s\n", list->next->content);
// 	return (0);
// }