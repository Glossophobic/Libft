/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:53:52 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/16 21:41:12 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
	if (fd < 0 || !s)
		return ;
    while (*s)
    {
        ft_putchar_fd(*s, fd);
		s++;
	}
}
