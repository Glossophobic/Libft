/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 00:12:02 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/16 23:58:19 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	
	if (n <= 0)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] || s2[i]) && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char str2[] = "DONT STRNCMP WHAT CANT BE COMPARED.";
	char str1[] = "1337 BENGUERIR";
	
	printf("dyalna  : %d\n", ft_strncmp(str1, str2, 0));
	printf("dyalhom : %d", strncmp(str1, str2, 0));
}*/
/*
int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*z1;
	unsigned char	*z2;

	z1 = (unsigned char*)s1;
	z2 = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	if (*z1 == '\0')
		return (-(*z2));
	if (*z2 == '\0')
		return (*z1);
	while (z1[i] != '\0' || z2[i] != '\0')
	{
		if (i == n - 1 || z1[i] != z2[i])
			return (z1[i] - z2[i]);
		i++;
	}
	return (z1[i] - z2[i]);
}
*/
