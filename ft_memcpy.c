/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:49:49 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/27 21:39:32 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdest;

	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	if (!src && !dest)
		return (NULL);
	while (n > 0)
	{
		*pdest++ = *psrc++;
		n--;
	}
	return (dest);
}


// #include <stdio.h>
// int main()
// {
// 	int src[] = {240,8,7,6};
// 	int dest[100] = {};
// 	memcpy(dest, src, 1);
// 	int n  = 0;
// 	while (n < 1)
// 	{
// 		printf("%d ",dest[n++]);
// 	}
// }