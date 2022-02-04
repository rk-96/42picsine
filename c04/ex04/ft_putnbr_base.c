/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:47:06 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/03 03:33:04 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr_l;
	char	nbr_c[32];
	int		ir;

	nbr_l = 0;
	ir = 0;
	if (ft_check_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		nbr_l = nbr * -1;
		ft_putchar('-');
	}
	else
		nbr_l = nbr;
	while (nbr_l > 0)
	{
		nbr_c[ir] = base[nbr_l % ft_strlen(base)];
		nbr_l = nbr_l / ft_strlen(base);
		ir++;
	}
	while (--ir >= 0)
		ft_putchar(nbr_c[ir]);
}
