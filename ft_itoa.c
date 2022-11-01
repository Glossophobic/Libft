/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:21:53 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/11/01 21:00:08 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nb(long int nb)
{
	int		count;

	count = 0;
	if (nb == 0)
		count++;
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;
	long	nbr;

	nbr = n;
	len = count_nb(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	i = 0;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
		i = 1;
	}
	while (--len >= i)
	{
		str[len] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (str);
}
