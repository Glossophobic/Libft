/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:44:03 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/22 03:59:17 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>
int	main()
{
	const char str[] = "moryadgay";
	char c = 'z';

	printf("dyalna  : %s\n",ft_strrchr(str, c));
	printf("dyalhom : %s", strrchr(str, c));
}
*/
