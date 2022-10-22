/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:06:32 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/22 03:57:10 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned int	slen;
	unsigned int	dlen;

	if (dstsize == 0)
		return (ft_strlen(src));
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize <= dlen)
		return (dstsize + slen);
	i = 0;
	while (src[i] && i < dstsize - dlen - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[i + dlen] = '\0';
	return (dlen + slen);
}

// int main()
// {
//     char    dst[10] = "";
//     char    src[10] = "NULL";
//     char    dst2[10] = "";
//     char    src2[10] = "NULL";
//     printf("dyalna  : %zu  |  ", ft_strlcat(dst, src, 3));
//     printf("%s\n", dst);
//     printf("dyalhom : %zu  |  ", strlcat(dst2, src2, 3));
//     printf("%s\n", dst2);
// }