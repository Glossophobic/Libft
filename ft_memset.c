/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 05:28:45 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/10 02:31:40 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Pointer arithmetic is based on offsetting the pointer by the size of the type it points to. Before you start incrementing that pointer, you should transform it from void* to pointer to char / unsigned char

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


#include <stdio.h>
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
