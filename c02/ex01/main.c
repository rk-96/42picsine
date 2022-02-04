/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:42:11 by rwattana          #+#    #+#             */
/*   Updated: 2022/01/30 23:10:47 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// TODO COPY STRING TO STRING
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	replace_first_h_with_y(char *str)
{
	str[0] = 'y';
}

void	replace_frist_char(char *src, char *dest)
{
	dest[0] =  src[0];
}

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	
	char *src = "ronakon";
	char des[5];
	int num_want = 3;

	ft_strncpy(des,src,num_want);
	ft_putstr(des);

	/*
	ft_putstr(str1);
	ft_putchar('\n');
	replace_frist_char(str1, str2);
	ft_putstr(str1);
	ft_putchar('\n');
	printf("========");
	replace_first_h_with_y(str1);
	printf("========");
	*/

	return 0;
}
