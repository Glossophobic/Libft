/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 01:47:49 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/28 21:10:26 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1_len;
	int		s2_len;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (0);
	ft_memmove(str, s1, s1_len);
	ft_memmove(str + s1_len, s2, s2_len + 1);
	return (str);
}

// int main()
// {
// 	char	str1[] = "senpai";
// 	char	str2[] = "joinme";
// 	printf("%s", ft_strjoin(NULL, NULL));
// }