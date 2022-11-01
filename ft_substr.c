/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 03:55:13 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/11/01 03:11:13 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	rem;
	size_t	s_len;
	char	*substr;

	i = 0;
	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		rem = 0;
	else if (s_len - start < len)
		rem = s_len - start;
	else
		rem = len;
	substr = malloc(sizeof(char) * rem + 1);
	if (!substr)
		return (0);
	while (i < rem)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

// int main()
// {
// 	char str[] = "hello";
// 	printf("%s\n", ft_substr(str, 5, 10651654));
// }