/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:35:55 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/30 16:10:06 by oubelhaj         ###   ########.fr       */
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

int main()
{
	
	printf("%s\n", ft_strchr("test~ef", 357));
// 	printf("%p\n", strchr("test~ef",  'e' + 256));
}

// when typecasted to char e + 256 will overflow when it reaches 128 and loop back to the 'e'
// while if not typecasted it will be considered an integer and search for 357