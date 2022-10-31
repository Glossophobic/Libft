/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 05:28:45 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/11/01 00:07:42 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len-- > 0)
		*p++ = (unsigned char)c;
	return (b);
}


// int main()
// {
// 	int *p;
// 	int zab[50] = {6,255,9,85};
//     p = zab;
// 	int i = 0;
//     while (i < 4)
//     {
// 		ft_memset(p, 69, 1);
//         printf("%d ", *p++);
// 		i++;
//     }
// 	return 0;
// }
