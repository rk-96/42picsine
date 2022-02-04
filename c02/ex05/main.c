/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:42:11 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/01 00:23:13 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// TODO COPY STRING TO STRING
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_str_is_uppercase(char *str);

int	main()
{
	char *str1 = "abcdefg", *str2 = "ABCDEFG", *str3="\0";
	printf("a - z = %d \n", ft_str_is_uppercase(str1));
	printf("A - Z = %d \n", ft_str_is_uppercase(str2));
	printf("empty = %d \n", ft_str_is_uppercase(str3));
	return 0;
}
