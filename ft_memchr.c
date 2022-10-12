/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:22:30 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/11 20:05:41 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	if (str == NULL)
		return (NULL);
	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return (p);
		p++;
		n--;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
    const int  tab[] = {1, 5, 8, 6};
    printf("%p\n", ft_memchr(s,'z', ));
    printf("%p", memchr(s, 'z', 100));
}
*/