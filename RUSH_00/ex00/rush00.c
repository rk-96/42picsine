/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:18:25 by rwattana          #+#    #+#             */
/*   Updated: 2022/01/16 16:23:28 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptepsong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:24:16 by ptepsong          #+#    #+#             */
/*   Updated: 2022/01/16 01:15:01 by ptepsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	genpatt00(int x, char a, char b, char c)
{
	int	i;

	i = 1;
	ft_putchar(a);
	while (i < x - 1)
	{
		if (2 < x)
		{
			ft_putchar(b);
		}
		i++;
	}
	if (x != 1)
	{
		ft_putchar(c);
	}
	ft_putchar('\n');
}
// 		x = 5 ,y = 3
void	rush00(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
		{
			genpatt00 (x, 'o', '-', 'o');
		}
		else if (y == i)
		{
			genpatt00 (x, 'o', '-', 'o');
		}
		else
		{
			genpatt00 (x, '|', ' ', '|');
		}
		i++;
	}
}
