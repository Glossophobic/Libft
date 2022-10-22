/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 03:55:13 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/22 04:01:48 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	rem;
	char	*substr;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		rem = 0;
	else if (ft_strlen(s) - start < len)
		rem = ft_strlen(s) - start;
	else
		rem = len;
	substr = malloc(rem + 1);
	if (!substr)
		return (0);
	while (i < rem)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
