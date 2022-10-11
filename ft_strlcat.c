/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:06:32 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/11 15:08:39 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  len;

    i = 0 ;
    j = ft_strlen(dst);
    len = ft_strlen(src) + ft_strlen(dst);
    if (!dst)
        return (len);
    while (src[i] && i < (size - j - 1))
        dst[j++] = src[i++];
    dst[j] = '\0';
    return (len);
}

int main()
{
    char    dst[10] = "MAD";
    char    src[] = "hoes";
    printf("%zu\n", ft_strlcat(dst, src, 11));
    printf("%s", dst);
}