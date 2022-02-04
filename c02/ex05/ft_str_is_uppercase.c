/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 00:26:52 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/01 00:26:54 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (str[i] == '\0')
		res = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			res = 1;
		else
		{
			res = 0;
			break ;
		}
		i++;
	}
	return (res);
}