/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 00:12:02 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/10 00:04:33 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] || s2[i]) && i < n-1)
		i++;
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char *str1 = "helloa k;";
	char *str2 = "helloa";
	
	printf("dyalhom : %d\n", ft_strncmp(str1, str2, 5));
	printf("dyalhom : %d", strncmp(str1, str2, 5));
}*/