/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 01:55:14 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/01 17:42:15 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char str1[] = "ilovelearning";
	char str2[] = "ilo";
	unsigned int n = 0;
	printf("strncmp    %d \n ", strncmp(str1, str2, n));
	printf("ft_strcat %d \n ", ft_strncmp(str1, str2,n));

	return 0;
}
