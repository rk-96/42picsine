/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 00:27:44 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/01 09:44:22 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (str[i] == '\0')
		res = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
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
