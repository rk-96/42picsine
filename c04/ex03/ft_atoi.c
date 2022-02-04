/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:59:47 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/02 21:28:53 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
