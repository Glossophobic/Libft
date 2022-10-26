/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:51:27 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/26 18:51:42 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwrd(char const *str, char sep)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == sep)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != sep)
				i++;
		}
	}
	return (count);
}

static char	*alloc_and_fill(const char *s, int n)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * n + 1);
	if (!str)
		return (0);
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
			tab[k++] = alloc_and_fill(s + j, i - j);
	}
	tab[k] = 0;
	return (tab);
}

// int main()
// {
//   char **str;
//   str = ft_split("\0aa\0bbb", '\0');
//   int i = 0;

//   while (str[i])
//   {
//     printf("%s\n", str[i]);
//     i++;
//   }
// }