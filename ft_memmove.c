/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:45:14 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/22 04:05:39 by oubelhaj         ###   ########.fr       */
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
// #include <stdio.h>
// int main()
// {
// 	char str[] = "abcde";
// 	memmove(str + 2, str, 3);
// 	printf("%s", str);
// }