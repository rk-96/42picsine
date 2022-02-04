/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 04:12:04 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/03 04:32:07 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{	
	int	i;

	i = 1;
	while (i < argc)
	{	
		if (argv[i] != 0)
			ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}	
}
