/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:45:14 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/14 05:44:02 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	// if (!dst && !src) //CHECK THIS SHIT
	// 	return (0);
	// if (dst == src) //ALSO CHECK THIS SHIT IF NECESSARY
	// 	return (dst); //
	i = 0;
	if (dst > src)
	{
		i = len - 1;
		while (i >= 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else if (dst < src)
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
