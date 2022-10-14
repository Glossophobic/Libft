/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:49:49 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/14 05:16:00 by oubelhaj         ###   ########.fr       */
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
	if (dest == src)
		return (dest);
	while (n > 0)
	{
		*pdest++ = *psrc++;
		n--;
	}
	return (dest);
}

/*#include <stdio.h>
int main()
{
	int csrc[] = {9,8,7,6};
	int cdest[100] = {0};
	ft_memcpy(cdest, csrc, sizeof(csrc) * 2);
	int n  = 0;
	while(n < 2)
	{
		printf("%d ",cdest[n++]);
	}
}*/