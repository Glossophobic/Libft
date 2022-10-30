/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:15:35 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/30 17:32:30 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_string;

	i = 0;
	if (!f || !s)
		return (0);
	new_string = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new_string)
		return (0);
	while (s[i])
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

// int main()
// {
// 	char str[] = "0000000000";
// 	printf("%s\n", ft_strmapi(str, &iter));
// }

//char (*)(unsigned int, char *)
//char (*)(unsigned int, char)