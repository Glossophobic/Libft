/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:33:05 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/31 18:49:19 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (!haystack && !len)
		return (0);
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] && len >= needle_len)
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && (haystack[i + j] && needle[j]))
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
		len--;
	}
	return (0);
}

// LEN IS HOW MANY CHARACTERS TO SEARCH FOR

// #include <string.h>
// int main()
// {
// 	char haystack[] = "";
// 	char needle[6] = "";
// 	printf("%zu\n", needle_len);
// 	printf("Mine   : %s\n", ft_strnstr(haystack, needle, 11));
// 	printf("Theirs : %s", strnstr(haystack, needle, 11));
// }