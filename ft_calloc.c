/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:13:53 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/14 01:33:12 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    unsigned char   *p;
    p = malloc(count * size);
    if (!p)
        return (0);
    ft_bzero(p, count * size);
    return ((void *)p);
}

# define RED        "\033[31m"
# define GREEN        "\033[32m"
# define DEFAULT    "\033[0m"
# define BLUE        "\033[0;34m"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	void	*ret_calloc;
	void	*ret_ft_calloc;
	(void)	argc;
	(void)	argv;

	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	ret_calloc = calloc(10, 4);
	ret_ft_calloc = ft_calloc(10, 4);
	if (!ft_memcmp(ret_calloc, ret_ft_calloc, (10 * 4)))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_calloc);
	free(ret_ft_calloc);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	ret_calloc = calloc(10, 1);
	ret_ft_calloc = ft_calloc(10, 1);
	if (!ft_memcmp(ret_calloc, ret_ft_calloc, (10 * 1)))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_calloc);
	free(ret_ft_calloc);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "------------------ FINISH -------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}