/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:35:55 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/10 01:59:54 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (0);
}

/*#include <string.h>
#include <stdio.h>
int	main()
{
	const char str[] = "moradfgf";
	int c = 6;

	printf("dyalna  : %s\n",ft_strchr(str, c));
	printf("dyalhom : %s", strchr(str, c));
}*/