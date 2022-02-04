/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 01:55:14 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/01 04:44:42 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, const char *to_find);

int	main()
{
	char str1[20] = "I need sleep ";
	char str2[20] = "need";
	
	printf("  %s \n ", strstr(str1, str2));
	printf(" %s \n ", ft_strstr(str1, str2));

	return 0;
}
