/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:51:27 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/19 23:45:59 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwrd(char const *str, char sep)
{
	unsigned int	i;
	int				count;

	count = 0;
	i = 0;
	while (str[i] == sep)
		i++;
	while (str[i] != '\0')
    {
        if (str[i] == sep)
			count++;
		else if (str[i] != sep && str[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

char	*ft_strndup(const char *s, int n)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[n] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	if (!s)
		return (0);
	tab = malloc(sizeof(char *) * (countwrd(s, c) + 1));
	if (!tab)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			tab[k++] = ft_strndup(s + j, i - j);
	}
	tab[k] = 0;
	return (tab);
}

// int main()
// {
// 	char **str;
// 	int i = 0; 
// 	str = ft_split(NULL, NULL);
// 	while (str[i])
// 	{
// 		printf("%s\n", str[i]);
// 		i++;
// 	}
// }