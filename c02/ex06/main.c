/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:42:11 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/01 00:37:40 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// TODO COPY STRING TO STRING
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int	main()
{
	char *str1 = "abcdefg", *str2 = "\n", *str3="\0";
	printf("CAN PRINT  = %d \n", ft_str_is_printable(str1));
	printf("CANT PRINT = %d \n", ft_str_is_printable(str2));
	printf("empty = %d \n", ft_str_is_printable(str3));
	return 0;
}
