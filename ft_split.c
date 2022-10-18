/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:51:27 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/18 19:46:32 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count1(char const *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == sep)
		i++;
	while (str[i])
	{
		if (str[i - 1] == sep)
			i++;
		else if (str[i] == sep)
			count++;
		else if (str[i] != sep && str[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

int	count2()
{

}

char	**creampie()
{

}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;
	
	str = malloc(sizeof(char *) * countw(s, c) + 1);
	if (!str)
		return (0);
	
}


// The array of new strings resulting from the split.
// NULL if the allocation fails.

// Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter. The array must end
// with a NULL pointer.