/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:37:42 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/11/01 03:43:38 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*fnc(void *content)
// {
//     if (!*(char*)content)
//         return (0);
// 	return ("HELLO");
// }
// void    fr(void *content)
// {
//     free(content);
//     printf("Freed from Desire!\n");    
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;

	head = NULL;
	if (!lst || !del || !f)
		return (0);
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}

// int main()
// {
//     t_list  *head;
//     t_list  *lst;
	
// 	head = ft_lstnew("content 1");
// 	ft_lstadd_back(&head, ft_lstnew(""));


//     lst = ft_lstmap(head, fnc, fr);
//     while (lst)
//     {
//         printf("new : %s  |  old : %s\n", lst->content, head->content);
//         lst = lst->next;
//         head = head->next;
//     }
// }
    