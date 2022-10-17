/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:40:10 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/17 00:55:24 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;
	
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && check(set, s1[i]))
		i++;
	while (j >= 0 && check(set, s1[j]))
		j--;
	len = j - i;
	str = ft_substr(s1, i, len + 1);
	return (str);
}
// #include <stdio.h>
// int main()
// {
// 	char const s1[] = "/*/*.Ouss/ama/.*/.";
// 	char const set[] = "/*.";
// 	printf("%s", ft_strtrim(s1, set));
// }
