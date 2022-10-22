/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:23:01 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/22 04:06:05 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		f(i, s++);
		i++;
	}
}

// void	iter(unsigned int i, char * s)
// {
// 	*s += i;
// }

// int main()
// {
// 	char str[] = "";
// 	ft_striteri(str, &iter);
// 	printf("%s\n", str);
// }
