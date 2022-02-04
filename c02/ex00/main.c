/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:42:11 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/01 10:19:17 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// TODO 
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main()
{
	
	char *src = "ronakon", *src1 = "ronakon";
	char des[10], des1[10];
	
	printf("ft_strcpy %s \n", ft_strcpy(des,src));
	printf("strcpy %s \n", strcpy(des1, src1));

	char des3[10] = "abc";
	char *src3 = "";
	printf("case src null= %s \n", strcpy(des3, src3 ));

	char des4[10] = "abc";
	char *src4 = "";
	printf("case src= %s \n", strcpy(des4, src4 ));

	return 0;
}
