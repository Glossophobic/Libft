/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:04:13 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/14 05:04:17 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*#include <stdio.h>
int main()
{
	char str[] = "thisis not zero";
	ft_bzero(str, 16);
	int i = 0;
	while (i < 16)
	{
		printf("%d, ", str[i]);
		i++;
	}
}*/