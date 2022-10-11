/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:33:05 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/10/11 14:48:07 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    
    i = 0;
    j = 0;
	if (!haystack || !needle)
        return ((char *)haystack);
    if (len == 0)
        return (0);
    while (haystack[i] && i < len)
    {
        if (haystack[i] == needle[j])
        {
            j = 0;
            while ((haystack[i + j] == needle[j]))
            {
                if (needle[j + 1] == '\0')
                    return ((char *)&haystack[i]);
                j++;
            }
        }
        i++;
    }
    return (NULL);
}

# define RED        "\033[31m"
# define GREEN        "\033[32m"
# define DEFAULT    "\033[0m"
# define BLUE        "\033[0;34m"
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
# include <stddef.h>
# include <signal.h>
# include <stdbool.h>

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
			write(1,"\033[31mKO \033[0m(",13);\
			write(1,#f,strlen(#f));\
			write(1,") ",2);}\
		else\
			write(1,"\033[32mOK\033[0m ",13);\

int	main(void)
{
	char	*ret_strnstr;
	char	*ret_ft_strnstr;
	char	str0[] = {"Hello world!"};
	char	str1[] = {"world"};
	char	str2[] = {"1337 BENGUERRIR"};
	char	str3[] = {"help"};
/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\tTESTING YOUR STRNSTR FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/
// SEGFAULT TESTS
	printf("%s%s%s", GREEN, "\t\tSEGFAULT TESTS :\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	TESTER(strnstr(NULL,NULL,0);)
	printf("\n");
	TESTER(strnstr("NULL",NULL,0);)
	printf("\n");
	TESTER(strnstr(NULL,"NULL",0);)
	printf("\n");
	TESTER(strnstr("NULL","NULL",0);)
	printf("\n");
	TESTER(strnstr(NULL,NULL,1);)
	printf("\n");
	TESTER(strnstr("NULL",NULL,1);)
	printf("\n");
	TESTER(strnstr(NULL,"NULL",1);)
	printf("\n");
	TESTER(strnstr("NULL","NULL",1);)
	printf("\n");
	TESTER(strnstr("NULLO",NULL,3);)
	printf("\n");
	TESTER(strnstr(NULL,"NULLO",3);)
	printf("\n");
	TESTER(strnstr("NULLO","NULL",3);)
	printf("\n");
	TESTER(strnstr(NULL,"",3);)
	printf("\n");
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 1
	printf("%s%s%s", GREEN, "----------------- TEST 1 --------------------\n", DEFAULT);
	ret_strnstr = strnstr(str0, str1, 5);
	ret_ft_strnstr = ft_strnstr(str0, str1, 5);
	if (ret_strnstr == ret_ft_strnstr)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 2
	printf("%s%s%s", GREEN, "----------------- TEST 2 --------------------\n", DEFAULT);
	ret_strnstr = strnstr(str0, str1, 13);
	ret_ft_strnstr = ft_strnstr(str0, str1, 13);
	if (ret_strnstr == ret_ft_strnstr)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 3
	printf("%s%s%s", GREEN, "----------------- TEST 3 --------------------\n", DEFAULT);
	ret_strnstr = strnstr(str2, str3, 0);
	ret_ft_strnstr = ft_strnstr(str2, str3, 0);
	if (ret_strnstr == ret_ft_strnstr)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 3
	printf("%s%s%s", GREEN, "----------------- TEST 4 --------------------\n", DEFAULT);
	ret_strnstr = strnstr(str2, str3, 100);
	ret_ft_strnstr = ft_strnstr(str2, str3, 100);
	if (ret_strnstr == ret_ft_strnstr)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 4
	printf("%s%s%s", GREEN, "----------------- TEST 5 --------------------\n", DEFAULT);
	ret_strnstr = strnstr(str0, str1, -5);
	ret_ft_strnstr = ft_strnstr(str0, str1, -5);
	if (ret_strnstr == ret_ft_strnstr)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "----------------- FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}