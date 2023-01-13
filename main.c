/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:32:17 by plouda            #+#    #+#             */
/*   Updated: 2023/01/13 11:44:05 by plouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	// ft_isalpha
	printf("———————————————————\n");
	printf("Test A: ft_isalpha\n");
	printf("———————————————————\n");
	if (ft_isalpha('a' - 1) == 0)
		printf("Test 1 correct\n");
	else
		printf("Test 1 incorrect\n");
	if (ft_isalpha('a') == 1)
		printf("Test 2 correct\n");
	else
		printf("Test 2 incorrect\n");
	if (ft_isalpha('z' + 1) == 0)
		printf("Test 3 correct\n");
	else
		printf("Test 3 incorrect\n");
	if (ft_isalpha('z') == 1)
		printf("Test 4 correct\n");
	else
		printf("Test 4 incorrect\n");
	if (ft_isalpha('A' - 1) == 0)
		printf("Test 5 correct\n");
	else
		printf("Test 5 incorrect\n");
	if (ft_isalpha('A') == 1)
		printf("Test 6 correct\n");
	else
		printf("Test 6 incorrect\n");
	if (ft_isalpha('Z' + 1) == 0)
		printf("Test 7 correct\n");
	else
		printf("Test 7 incorrect\n");
	if (ft_isalpha('Z') == 1)
		printf("Test 8 correct\n");
	else
		printf("Test 8 incorrect\n");

	// ft_isdigit
	printf("———————————————————\n");
	printf("Test B: ft_isdigit\n");
	printf("———————————————————\n");
	if (ft_isdigit('0' - 1) == 0)
		printf("Test 1 correct\n");
	else
		printf("Test 1 incorrect\n");
	if (ft_isdigit('0') == 1)
		printf("Test 2 correct\n");
	else
		printf("Test 2 incorrect\n");
	if (ft_isdigit('9' + 1) == 0)
		printf("Test 3 correct\n");
	else
		printf("Test 3 incorrect\n");
	if (ft_isdigit('9') == 1)
		printf("Test 4 correct\n");
	else
		printf("Test 4 incorrect\n");

	// ft_isalnum
	printf("———————————————————\n");
	printf("Test C: ft_isalnum\n");
	printf("———————————————————\n");
	if (ft_isalnum('a' - 1) == 0)
		printf("Test 1 correct\n");
	else
		printf("Test 1 incorrect\n");
	if (ft_isalnum('a') == 1)
		printf("Test 2 correct\n");
	else
		printf("Test 2 incorrect\n");
	if (ft_isalnum('z' + 1) == 0)
		printf("Test 3 correct\n");
	else
		printf("Test 3 incorrect\n");
	if (ft_isalnum('z') == 1)
		printf("Test 4 correct\n");
	else
		printf("Test 4 incorrect\n");
	if (ft_isalnum('A' - 1) == 0)
		printf("Test 5 correct\n");
	else
		printf("Test 5 incorrect\n");
	if (ft_isalnum('A') == 1)
		printf("Test 6 correct\n");
	else
		printf("Test 6 incorrect\n");
	if (ft_isalnum('Z' + 1) == 0)
		printf("Test 7 correct\n");
	else
		printf("Test 7 incorrect\n");
	if (ft_isalnum('Z') == 1)
		printf("Test 8 correct\n");
	else
		printf("Test 8 incorrect\n");
	if (ft_isalnum('0' - 1) == 0)
		printf("Test 9 correct\n");
	else
		printf("Test 9 incorrect\n");
	if (ft_isalnum('0') == 1)
		printf("Test 10 correct\n");
	else
		printf("Test 10 incorrect\n");
	if (ft_isalnum('9' + 1) == 0)
		printf("Test 11 correct\n");
	else
		printf("Test 11 incorrect\n");
	if (ft_isalnum('9') == 1)
		printf("Test 12 correct\n");
	else
		printf("Test 12 incorrect\n");

	// ft_isascii
	printf("———————————————————\n");
	printf("Test D: ft_isascii\n");
	printf("———————————————————\n");
	if (ft_isascii(-1) == 0)
		printf("Test 1 correct\n");
	else
		printf("Test 1 incorrect\n");
	if (ft_isascii(0) == 1)
		printf("Test 2 correct\n");
	else
		printf("Test 2 incorrect\n");
	if (ft_isascii(128) == 0)
		printf("Test 3 correct\n");
	else
		printf("Test 3 incorrect\n");
	if (ft_isascii(127) == 1)
		printf("Test 4 correct\n");
	else
		printf("Test 4 incorrect\n");

	//ft_isprint
	printf("———————————————————\n");
	printf("Test E: ft_isprint\n");
	printf("———————————————————\n");
	if (ft_isprint(' ' - 1) == 0)
		printf("Test 1 correct\n");
	else
		printf("Test 1 incorrect\n");
	if (ft_isprint(' ') == 1)
		printf("Test 2 correct\n");
	else
		printf("Test 2 incorrect\n");
	if (ft_isprint('~' + 1) == 0)
		printf("Test 3 correct\n");
	else
		printf("Test 3 incorrect\n");
	if (ft_isprint('~') == 1)
		printf("Test 4 correct\n");
	else
		printf("Test 4 incorrect\n");

	// ft_strlen
	printf("———————————————————\n");
	printf("Test F: ft_strlen\n");
	printf("———————————————————\n");
	if (ft_strlen("123") == 3)
		printf("Test 1 correct\n");
	else
		printf("Test 1 incorrect\n");
	if (ft_strlen("") == 0)
		printf("Test 2 correct\n");
	else
		printf("Test 2 incorrect\n");

	// ft_strlcpy
	printf("———————————————————\n");
	printf("Test G: ft_strlcpy\n");
	printf("———————————————————\n");
	char src[] = "coucou";
	char dest[10]; 

	memset(dest, 'A', 10);
	if (ft_strlcpy(dest, src, 0) == strlen(src) && dest[0] == 'A')
		printf("Test 1 correct\n");
	else
		printf("Test 1 incorrect\n");
	if (ft_strlcpy(dest, src, 1) == strlen(src) && dest[0] == 0 && dest[1] == 'A')
		printf("Test 2 correct\n");
	else
		printf("Test 2 incorrect\n");
	if (ft_strlcpy(dest, src, 2) == strlen(src) && dest[0] == 'c' && dest[1] == 0  && dest[2] == 'A')
		printf("Test 3 correct\n");
	else
		printf("Test 3 incorrect\n");
	if (ft_strlcpy(dest, src, -1) == strlen(src) && !strcmp(src, dest) && dest[strlen(src) + 1] == 'A')
		printf("Test 4 correct\n");
	else
		printf("Test 4 incorrect\n");
	memset(dest, 'A', 10);
	if (ft_strlcpy(dest, src, 6) == strlen(src) && !memcmp(src, dest, 5) && dest[5] == 0)
		printf("Test 5 correct\n");
	else
		printf("Test 5 incorrect\n");
	memset(dest, 'A', 10);
	if (ft_strlcpy(dest, src, 7) == strlen(src) && !memcmp(src, dest, 7))
		printf("Test 6 correct\n");
	else
		printf("Test 6 incorrect\n");
	memset(dest, 'A', 10);
	if (ft_strlcpy(dest, src, 8) == strlen(src) && !memcmp(src, dest, 7))
		printf("Test 7 correct\n");
	else
		printf("Test 7 incorrect\n");
	memset(dest, 'A', 10);
	if (ft_strlcpy(dest, "", 42) == 0 && !memcmp("", dest, 1))
		printf("Test 8 correct\n");
	else
		printf("Test 8 incorrect\n");
	memset(dest, 'A', 10);
	// the last test seems to be faulty (result of dest[0] cannot be 0)
	if (ft_strlcpy(dest, "1", 0) == 1 && dest[0] == 0)
		printf("Test 9 correct\n");
	else
		printf("Test 9 incorrect - TAGGED\n");
	memset(dest, 'A', 10);

	// ft_strlcat
	printf("———————————————————\n");
	printf("Test H: ft_strlcat\n");
	printf("———————————————————\n");
	char dest2[30]; 
	memset(dest2, 0, 30);
	char *src2 = (char *)"AAAAAAAAA";
	dest2[0] = 'B';
	if (ft_strlcat(dest2, src2, 0) == strlen(src2) && !strcmp(dest2, "B"))
		printf("Test 1 correct\n");
	else
		printf("Test 1 incorrect\n");
	dest2[0] = 'B';
	if (ft_strlcat(dest2, src2, 1) == 10 && !strcmp(dest2, "B"))
		printf("Test 2 correct\n");
	else
		printf("Test 2 incorrect\n");
	memset(dest2, 'B', 4);
	if (ft_strlcat(dest2, src2, 3) == 3 + strlen(src2) && !strcmp(dest2, "BBBB"))
		printf("Test 3 correct\n");
	else
		printf("Test 3 incorrect\n");
	if (ft_strlcat(dest2, src2, 6) == 13 && !strcmp(dest2, "BBBBA"))
		printf("Test 4 correct\n");
	else
		printf("Test 4 incorrect\n");

	// how should I deal with Test 5?
	/*
	memset(dest2, 'C', 5);
	if (ft_strlcat(dest2, src2, -1) == 14 && !strcmp(dest2, "CCCCCAAAAAAAAA"))
		printf("Test 5 correct\n");
	else
		printf("Test 5 incorrect\n");
	*/

	memset(dest2, 'C', 15);
	if (ft_strlcat(dest2, src2, 17) == 24 && !strcmp(dest2, "CCCCCCCCCCCCCCCA"))
		printf("Test 6 correct\n");
	else
		printf("Test 6 incorrect\n");
	memset(dest2, 0, 30);
	if (ft_strlcat(dest2, src2, 1) == strlen(src2) && !strcmp(dest2, ""))
		printf("Test 7 correct\n");
	else
		printf("Test 7 incorrect\n");
	memset(dest2, 0, 30); memset(dest2, '1', 10);
	if (ft_strlcat(dest2, src2, 5) == strlen(src2) + 5 && !strcmp(dest2, "1111111111"))
		printf("Test 8 correct\n");
	else
		printf("Test 8 incorrect\n");
	memset(dest2, 0, 30); memset(dest2, '1', 10);
	if (ft_strlcat(dest2, src2, 5) == strlen(src2) + 5 && !strcmp(dest2, "1111111111"))
		printf("Test 9 correct\n");
	else
		printf("Test 9 incorrect\n");
	memset(dest2, 0, 30); memset(dest2, '1', 10);
	if (ft_strlcat(dest2, "", 15) == 10 && !strcmp(dest2, "1111111111"))
		printf("Test 10 correct\n");
	else
		printf("Test 10 incorrect\n");
	memset(dest2, 0, 30);
	if (ft_strlcat(dest2, "", 42) == 0 && !strcmp(dest2, ""))
		printf("Test 11 correct\n");
	else
		printf("Test 11 incorrect\n");
	memset(dest2, 0, 30);
	if (ft_strlcat(dest2, "", 0) == 0 && !strcmp(dest2, ""))
		printf("Test 12 correct\n");
	else
		printf("Test 12 incorrect\n");
	memset(dest2, 0, 30);
	if (ft_strlcat(dest2, "123", 1) == 3 && !strcmp(dest2, ""))
		printf("Test 13 correct\n");
	else
		printf("Test 13 incorrect\n");
	memset(dest2, 0, 30);
	if (ft_strlcat(dest2, "123", 2) == 3 && !strcmp(dest2, "1"))
		printf("Test 14 correct\n");
	else
		printf("Test 14 incorrect\n");
	memset(dest2, 0, 30);
	if (ft_strlcat(dest2, "123", 3) == 3 && !strcmp(dest2, "12"))
		printf("Test 15 correct\n");
	else
		printf("Test 15 incorrect\n");
	memset(dest2, 0, 30);
	if (ft_strlcat(dest2, "123", 4) == 3 && !strcmp(dest2, "123"))
		printf("Test 16 correct\n");
	else
		printf("Test 16 incorrect\n");
	memset(dest2, 0, 30);
	if (ft_strlcat(dest2, "123", 0) == 3 && !strcmp(dest2, ""))
		printf("Test 17 correct\n");
	else
		printf("Test 17 incorrect\n");

	// ft_tolower, ft_toupper
	printf("———————————————————————————————\n");
	printf("Test I: ft_tolower, ft_toupper\n");
	printf("———————————————————————————————\n");
	if (ft_tolower('A' - 1) == 'A' - 1)
		printf("Test 1 correct\n");
	else
		printf("Test 1 incorrect\n");
	if (ft_tolower('A') == 'a')
		printf("Test 2 correct\n");
	else
		printf("Test 2 incorrect\n");
	if (ft_tolower('Z' + 1) == 'Z' + 1)
		printf("Test 3 correct\n");
	else
		printf("Test 3 incorrect\n");
	if (ft_tolower('Z') == 'z')
		printf("Test 4 correct\n");
	else
		printf("Test 4 incorrect\n");
	if (ft_toupper('a' - 1) == 'a' - 1)
		printf("Test 5 correct\n");
	else
		printf("Test 5 incorrect\n");
	if (ft_toupper('a') == 'A')
		printf("Test 6 correct\n");
	else
		printf("Test 6 incorrect\n");
	if (ft_toupper('z' + 1) == 'z' + 1)
		printf("Test 7 correct\n");
	else
		printf("Test 7 incorrect\n");
	if (ft_toupper('z') == 'Z')
		printf("Test 8 correct\n");
	else
		printf("Test 8 incorrect\n");

	// ft_strchr
	printf("———————————————————\n");
	printf("Test J: ft_strchr\n");
	printf("———————————————————\n");
	char	s1[] = "tripouille";
	if (ft_strchr(s1, 't') == s1)
		printf("Test 1 correct\n");
	else
		printf("Test 1 incorrect\n");
	if (ft_strchr(s1, 'l') == s1 + 7)
		printf("Test 2 correct\n");
	else
		printf("Test 2 incorrect\n");
	if (ft_strchr(s1, 'z') == 0)
		printf("Test 3 correct\n");
	else
		printf("Test 3 incorrect\n");
	if (ft_strchr(s1, 0) == s1 + strlen(s1))
		printf("Test 4 correct\n");
	else
		printf("Test 4 incorrect\n");
	// shouldn't this test equal to 0?
	if (ft_strchr(s1, 't' + 256) == s1)
		printf("Test 5 correct\n");
	else
		printf("Test 5 incorrect - TAGGED\n");

	// ft_strrchr
	printf("———————————————————\n");
	printf("Test K: ft_strrchr\n");
	printf("———————————————————\n");
	char s2[] = "tripouille";
	char s3[] = "ltripouiel";
	char s4[] = "";
	if (ft_strrchr(s2, 't') == s2)
		printf("Test 1 correct\n");
	else
		printf("Test 1 incorrect\n");
	if (ft_strrchr(s2, 'l') == s2 + 8)
		printf("Test 2 correct\n");
	else
		printf("Test 2 incorrect\n");
	if (ft_strrchr(s3, 'l') == s3 + 9)
		printf("Test 3 correct\n");
	else
		printf("Test 3 incorrect\n");
	if (ft_strrchr(s2, 'z') == 0)
		printf("Test 4 correct\n");
	else
		printf("Test 4 incorrect\n");
	if (ft_strrchr(s2, 0) == s2 + strlen(s2))
		printf("Test 5 correct\n");
	else
		printf("Test 5 incorrect\n");
	// shouldn't this test equal to 0?
	if (ft_strrchr(s2, 't' + 256) == s2)
		printf("Test 6 correct\n");
	else
		printf("Test 6 incorrect - TAGGED\n");
	char * empty = (char*)calloc(1, 1);
	if (ft_strrchr(empty, 'V') == 0)
		printf("Test 7 correct\n");
	else
		printf("Test 7 incorrect\n");
	free(empty);
	if (ft_strrchr(s4, 0) == s4)
		printf("Test 8 correct\n");
	else
		printf("Test 8 incorrect\n");

	// ft_strncmp
	printf("———————————————————\n");
	printf("Test L: ft_strncmp\n");
	printf("———————————————————\n");
	if (ft_strncmp("t", "", 0) == 0)
		printf("Test 1 correct\n");
	else
		printf("Test 1 incorrect\n");
	if (ft_strncmp("1234", "1235", 3) == 0)
		printf("Test 2 correct\n");
	else
		printf("Test 2 incorrect\n");
	if (ft_strncmp("1234", "1235", 4) < 0)
		printf("Test 3 correct\n");
	else
		printf("Test 3 incorrect\n");
	if (ft_strncmp("1234", "1235", -1) < 0)
		printf("Test 4 correct\n");
	else
		printf("Test 4 incorrect\n");
	if (ft_strncmp("", "", 42) == 0)
		printf("Test 5 correct\n");
	else
		printf("Test 5 incorrect\n");
	if (ft_strncmp("Tripouille", "Tripouille", 42) == 0)
		printf("Test 6 correct\n");
	else
		printf("Test 6 incorrect\n");
	if (ft_strncmp("Tripouille", "tripouille", 42) < 0)
		printf("Test 7 correct\n");
	else
		printf("Test 7 incorrect\n");
	if (ft_strncmp("Tripouille", "TriPouille", 42) > 0)
		printf("Test 8 correct\n");
	else
		printf("Test 8 incorrect\n");
	if (ft_strncmp("Tripouille", "TripouillE", 42) > 0)
		printf("Test 9 correct\n");
	else
		printf("Test 9 incorrect\n");	
	if (ft_strncmp("Tripouille", "TripouilleX", 42) < 0)
		printf("Test 10 correct\n");
	else
		printf("Test 10 incorrect\n");
	if (ft_strncmp("Tripouille", "Tripouill", 42) > 0)
		printf("Test 11 correct\n");
	else
		printf("Test 11 incorrect\n");
	if (ft_strncmp("", "1", 0) == 0)
		printf("Test 12 correct\n");
	else
		printf("Test 12 incorrect\n");
	if (ft_strncmp("1", "", 0) == 0)
		printf("Test 13 correct\n");
	else
		printf("Test 13 incorrect\n");
	if (ft_strncmp("", "1", 1) < 0)
		printf("Test 14 correct\n");
	else
		printf("Test 14 incorrect\n");
	if (ft_strncmp("1", "", 1) > 0)
		printf("Test 15 correct\n");
	else
		printf("Test 15 incorrect\n");
	if (ft_strncmp("", "", 1) == 0)
		printf("Test 16 correct\n");
	else
		printf("Test 16 incorrect\n");

	return (0);
}
