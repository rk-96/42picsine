/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:16:24 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/03 20:33:09 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while ((i * i) <= nb && i < 46341)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	i--;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	num_sqrt;

	if (nb < 2)
		return (0);
	num_sqrt = ft_sqrt(nb);
	i = 2;
	while (i <= num_sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
