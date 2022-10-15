/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 02:09:27 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/15 04:30:24 by oubelhaj         ###   ########.fr       */
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

int	howlong(const char *s1, const char *set)
{
	int		i;
	int		count;
	
	i = 0;
	count = 0;
	while (s1[i] && check(set, s1[i]))
	{
		count++;
		i++;
	}
	i = ft_strlen(s1) - 1;
	while (i >= 0 && check(set, s1[i]))
	{
		count++;
		i--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
    char	*str;
	int		i;
	int		j;
	int		count;
	
	i = 0;
	j = 0;
	count = howlong(s1, set);
	str = malloc((ft_strlen(s1) - count) + 1);
	if (!str)
		return (0);
	while (s1[i])
	{
		if (!check(set, s1[i]))
			str[j++] = s1[i];
		i++;
	}
	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		if (!check(set, s1[i]))
			str[j++] = s1[i];
		i--;
	}
	str[j] = '\0';
	return (str);
}
#include <stdio.h>
int main()
{
	char const s1[] = "/*/*.Ouss/ama/.*/.";
	char const set[] = "/*.";
	printf("%s", ft_strtrim(s1, set));
}