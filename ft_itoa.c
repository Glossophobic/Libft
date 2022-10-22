/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:21:53 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/22 03:47:21 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nb(int nb)
{
	int		count;
	long	n;

	n = (long)nb;
	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
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

	nbr = (long)n;
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