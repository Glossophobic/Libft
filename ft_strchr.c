/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:35:55 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/28 23:02:51 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c) 			  // explain this typecast with the example below
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (0);
}

// int main()
// {
	
// 	printf("%p\n", ft_strchr("test~ef", 101 + 256));
// 	printf("%p\n", strchr("test~ef",  'e' + 256));
// }