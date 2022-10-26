/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:55:44 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/26 01:24:02 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (*lst != NULL)
	{
		node = ft_lstlast(*lst);
		node->next = new;
	}
	else
		*lst = new;
}

// int main()
// {
// 	t_list	*p;
// 	t_list	new;
// 	p = NULL;
// 	new.content = "hello";
// 	new.next = NULL;
// 	p = ft_lstnew("ok");
// 	ft_lstadd_back(&p, &new); 
// 	while (p != NULL)
// 	{
//    		printf("%s \n", p->content);
// 		printf("%p\n", p->next);
//     	p = p->next;
// 	}
// }