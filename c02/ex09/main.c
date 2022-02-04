/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:42:11 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/01 01:15:44 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// TODO COPY STRING TO STRING
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int	main()
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("BEFORE  = %s \n", str1);
	ft_strcapitalize(str1);
	printf("AFTER   = %s \n", str1);
	return 0;
}
