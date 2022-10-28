/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:23:01 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/28 21:42:53 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	fnc(unsigned int i, char *str)
// {
// 	i = 0;
// 	str[i] -= 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int main()
// {
// 	char str[] = "hhhhhhhhh";
// 	ft_striteri(str, &fnc);
// 	printf("%s\n", str);
// }
