/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:55:44 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/27 17:56:08 by oubelhaj         ###   ########.fr       */
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
	
// 	list = ft_lstnew("element 0");
// 	ft_lstadd_back(&list, ft_lstnew("element 1"));
// 	printf("%s\n", list->content);
// 	printf("%s", list->next->content);
// 	return (0);
// }