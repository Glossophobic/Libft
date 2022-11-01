/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:13:53 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/11/01 20:59:45 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	p = malloc(size * count);
	if (!p)
		return (0);
	ft_bzero(p, size * count);
	return (p);
}
