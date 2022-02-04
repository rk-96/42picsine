/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:15:09 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/03 00:09:28 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main()
{
	char *str1 = "\0" , *str2 ="string", *str3 = "a";
	printf("case null   %d \n" , ft_strlen(str1));
	printf("case string %d \n" , ft_strlen(str2));
	printf("case a      %d \n" , ft_strlen(str3));
	return (0);
}
