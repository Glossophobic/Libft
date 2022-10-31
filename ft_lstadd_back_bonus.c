/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:55:44 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/31 22:53:00 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;
	
	tmp = *lst;
	if (tmp != NULL)
		ft_lstlast(tmp)->next = new;
	else
		tmp = new;
	new->next = NULL;
}

int main()
{
	t_list	*list;
	
	list = ft_lstnew("element 0");
	ft_lstadd_back(&list, ft_lstnew("element 1"));
	printf("%s\n", list->content);
	printf("%s\n", list->next->content);
	return (0);
}