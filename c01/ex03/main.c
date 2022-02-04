/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:28:56 by rwattana          #+#    #+#             */
/*   Updated: 2022/01/29 23:39:36 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main()
{
	int	x = 14 , y = 5;
	int	*ptdiv = &x , *ptmod = &y;

	ft_div_mod(x, y, ptdiv, ptmod);

	printf("x divid y = %d |  x mod d = %d", *ptdiv , *ptmod);
	return (0);
}
