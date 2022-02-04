/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:39:20 by rwattana          #+#    #+#             */
/*   Updated: 2022/01/29 15:16:05 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printpatt(char c1, char c2, char c3)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if (c1 == '7' && c2 == '8' && c3 == '9')
		write(1, "", 0);
	else
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = '0';
	c2 = '1';
	c3 = '2';
	while (c1 <= '7')
	{
		while (c2 <= '8')
		{
			while (c3 <= '9')
			{
				printpatt(c1, c2, c3);
				c3++;
			}
			c3 = ++c2 + 1;
		}
		c2 = ++c1 + 1;
		c3 = c2 + 1;
	}
}
