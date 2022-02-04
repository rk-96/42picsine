/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:42:11 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/01 00:17:46 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// TODO COPY STRING TO STRING
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_str_is_lowercase(char *str);

int	main()
{
	char *str1 = "abcdefg", *str2 = "abCdeFG", *str3="\0";
	printf("a - z = %d \n", ft_str_is_lowercase(str1));
	printf("a - Z = %d \n", ft_str_is_lowercase(str2));
	printf("empty  = %d \n", ft_str_is_lowercase(str3));
	return 0;
}
