/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:45:56 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/03 02:01:22 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	total;

	minus = 1;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus = minus * -1;
		i++;
	}
	total = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		total = (total * 10) + (str[i] - '0');
		i++;
	}
	total *= minus;
	return (total);
}


void    ft_putnbr_base(int nbr, char *base);

int     main(int argc, char *argv[])
{
	while (--argc > 0)
	{
		// printf("%s", argv[argc]);
		ft_putnbr_base(ft_atoi(argv[argc]),"0123456789ABCDEF");
		printf("\n"); 
	}
	/*
	// int	number;
	char	*base;
	int	i;
	
	base = "0123456789ABCDEF";
	i = 1;
	while ( i <= argc )
	{
		ft_putnbr_base(ft_atoi(argv[i]), base);
	}

	*/
}
