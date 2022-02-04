/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:42:11 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/01 00:57:26 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// TODO COPY STRING TO STRING
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int	main()
{
	char str1[] = "abcdefgIJKLMNOpQrStUVWxYz";

	printf("BEFORE  = %s \n", str1);
	ft_strlowcase(str1);
	printf("AFTER   = %s \n", str1);
	return 0;
}
