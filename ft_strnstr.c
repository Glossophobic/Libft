/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:33:05 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/17 12:49:45 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] && len >= ft_strlen(needle))
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && (haystack[i + j] && needle[j]))
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
		len--;
	}
	return (NULL);
}

// #include <string.h>
// int main()
// {
// 	char haystack[] = "";
// 	char needle[6] = "";
// 	printf("%zu\n", ft_strlen(needle));
// 	printf("Mine   : %s\n", ft_strnstr(haystack, needle, 11));
// 	printf("Theirs : %s", strnstr(haystack, needle, 11));
// }