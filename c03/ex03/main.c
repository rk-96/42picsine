/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 01:55:14 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/01 04:26:47 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char str1[20] = "strcat ";
	char str2[20] = "ft_strcat ";
	unsigned int n = 3;
	
	printf("  %s \n ", strncat(str1, " string", n));
	printf(" %s \n ", ft_strncat(str2, " string", n));

	return 0;
}
