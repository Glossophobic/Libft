/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:13:53 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/31 19:13:28 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size && count > SIZE_MAX / size) // darb = overflow || qisma mat overflowach (dont do this : count > SIZE_MAX / size)
		return (NULL);
	p = malloc(size * count);
	if (!p)
		return (0);
	ft_bzero(p, size * count);
	return (p);
}

int main()
{
	char	*d;
	char	*d2;
	
	d = ft_calloc(SIZE_MAX, SIZE_MAX);
	printf("MINE  : %p\n", d);
	d2 = calloc(SIZE_MAX, SIZE_MAX);
	printf("THEIRS: %p\n", d2);

}