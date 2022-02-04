/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:42:11 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/01 09:43:43 by rwattana         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str);

int	main()
{
	//TODO case string a-z 97 to 122
	char *src1 = "abcd";
	printf("%d \n", ft_str_is_alpha(src1));
	
	//TODO case string a-z or A -Z
	char *src4 = "abcdE";
	printf("%d \n", ft_str_is_alpha(src4));
	
	
	//TODO case string with other than 97 to 122
	char *src2 = "abcdD12%";
	printf("%d \n", ft_str_is_alpha(src2));
	
	//TODO case string empty ' ' is 32
	char src3[] = "\0";
	printf("%d \n", ft_str_is_alpha(src3));
	
	return 0;
}
