/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:44:02 by rwattana          #+#    #+#             */
/*   Updated: 2022/01/29 23:48:00 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main()
{
	int a = 10, b = 3, *pa = &a, *pb = &b;
	ft_ultimate_div_mod(pa, pb);
	printf("a div b = %d | a mod b = %d", *pa, *pb);
	return (0);
}
