/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:45:14 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/27 21:49:23 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*pdst;
	unsigned char	*psrc;

	i = 0;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (dst > src)
	{
		i = len - 1;
		while (i >= 0)
		{
			pdst[i] = psrc[i];
			i--;
		}
	}
	else if (dst < src)
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}

// int main()
// {
// 	int str[100] = {1, 5, 6, 9, 6};
// 	ft_memmove(str + 2, str, 12);
// 	for (int i = 0; i < 5; i++)
// 		printf("%d, ", str[i]);
// }