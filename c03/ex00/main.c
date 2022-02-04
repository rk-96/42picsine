/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 01:55:14 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/01 03:22:53 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char str1[] = "abcd";
	char str2[] = "abcde";
	
	printf("strcmp    %d \n ", strcmp(str1, str2));
	printf("ft_strcmp %d \n ", ft_strcmp(str1, str2));

	return 0;
}
