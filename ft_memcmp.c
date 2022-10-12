/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:57:24 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/12 23:21:30 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t          i;
    unsigned char   *p1;
    unsigned char   *p2;

    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;
    if (n == 0)
        return (0);
    i = 0;
    while (i < n)
    {
        if (p1[i] != p2[i])
            return (p1[i] - p2[i]);
        i++;
    }
    return (p1[i] - p2[i]);
}
# define RED        "\033[31m"
# define GREEN        "\033[32m"
# define DEFAULT    "\033[0m"
# define BLUE        "\033[0;34m"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>
#include <signal.h>
#include <stdbool.h>
#include <string.h>

pid_t pid;
bool has_segfault_ft;
bool has_segfault_org;

# define TEST_SEGFAULT(x,y) do { \
	if ((pid = fork()) < 0) \
		exit(EXIT_FAILURE); \
	if (pid == 0) { \
		do { x } while(0); \
		exit(EXIT_SUCCESS); \
	} else { \
		wait(&pid); \
		y = WIFSIGNALED(pid); \
	} \
} while(0);

#define TESTER(f) \
	TEST_SEGFAULT(f,has_segfault_org)\
	TEST_SEGFAULT(ft_##f,has_segfault_ft)\
		if(!has_segfault_org && has_segfault_ft){\
			write(1,"\033[31m[KO]\n\033[0m(",13);\
			write(1,#f,strlen(#f));\
			write(1,") ",2);}\
		else\
			write(1,"\033[32m[OK]\n\033[0m ",13);\

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int		ret_memcmp;
	int		ret_ft_memcmp;
	char	str0[] = {"Hello world!"};
	char	str1[] = {"Hello world"};
	char	str2[] = {"1337 BENGUERIR"};
	char	str3[] = {"Can I TEST YOUR CODE?"};

/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR MEMCMP FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/
// SEGFAULT TESTS :
	printf("%s%s%s", GREEN, "-------------- SEGFAULT TESTS ---------------\n", DEFAULT);
	TESTER(memcmp(NULL,NULL,0);)
	usleep(250000);
	TESTER(memcmp("NULL",NULL,0);)
	usleep(250000);
	TESTER(memcmp(NULL,"NULL",0);)
	usleep(250000);
	TESTER(memcmp("NULL","NULL",0);)
	usleep(250000);
	TESTER(memcmp(NULL,NULL,1);)
	usleep(250000);
	TESTER(memcmp("NULL",NULL,1);)
	usleep(250000);
	TESTER(memcmp(NULL,"NULL",1);)
	usleep(250000);
	TESTER(memcmp("NULL","NULL",1);)
	usleep(250000);
	TESTER(memcmp("NULLO",NULL,3);)
	usleep(250000);
	TESTER(memcmp(NULL,"NULLO",3);)
	usleep(250000);
	TESTER(memcmp("NULLO","NULL",3);)
	usleep(250000);
	printf("\n");
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
// TEST 1
	printf("%s%s%s", GREEN, "----------------- TEST 1 --------------------\n", DEFAULT);
	ret_memcmp = memcmp(str0, str1, 5);
	ret_ft_memcmp = ft_memcmp(str0, str1, 5);
	if (ret_memcmp == ret_ft_memcmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 2
	printf("%s%s%s", GREEN, "----------------- TEST 2 --------------------\n", DEFAULT);
	ret_memcmp = memcmp(str0, str1, 13);
	ret_ft_memcmp = ft_memcmp(str0, str1, 13);
	if (ret_memcmp == ret_ft_memcmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 3
	printf("%s%s%s", GREEN, "----------------- TEST 3 --------------------\n", DEFAULT);
	ret_memcmp = memcmp(str2, str3, 0);
	ret_ft_memcmp = ft_memcmp(str2, str3, 0);
	if (ret_memcmp == ret_ft_memcmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 4
	printf("%s%s%s", GREEN, "----------------- TEST 4 --------------------\n", DEFAULT);
	ret_memcmp = memcmp(str2, str3, 100);
	ret_ft_memcmp = ft_memcmp(str2, str3, 100);
	if (ret_memcmp == ret_ft_memcmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 5
	printf("%s%s%s", GREEN, "----------------- TEST 5 --------------------\n", DEFAULT);
	ret_memcmp = memcmp(str0, str1, -5);
	ret_ft_memcmp = memcmp(str0, str1, -5);
	if (ret_memcmp == ret_ft_memcmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "----------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "----------------- FINISH ---------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}