/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:13:53 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/03 02:39:24 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);

int	main()
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = -2147483648;
	ft_putnbr(i);
	ft_putchar('\n');
	j =  2147483647;
	ft_putnbr(j);
	ft_putchar('\n');
	k = 0;
	ft_putnbr(k);
	ft_putchar('\n');
	l = 42;
	ft_putnbr(l);

	return (0);
}
