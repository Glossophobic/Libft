/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 05:28:45 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/14 01:31:49 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len > 0)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}


/*#include <stdio.h>
#include <string.h>
int main()
{
	int n = 9;
	 int zab[] = {9,8,7,6,5,4,3,2,1};
	memset(&zab, 6,  1);
    int i =0;
    while (i < n)
    {
        printf("%d ", zab[i]);
        i++;
    }
	return 0;
}
*/