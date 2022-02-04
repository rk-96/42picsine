/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 01:55:14 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/01 04:28:21 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main()
{
	char str1[20] = "strcat ";
	char str2[20] = "ft_strcat ";
	
	printf("  %s \n ", strcat(str1, " string"));
	printf(" %s \n ", ft_strcat(str2, " string"));

	return 0;
}
