/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:06:29 by rwattana          #+#    #+#             */
/*   Updated: 2022/01/29 23:10:37 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	num1;
	int	num2;
	int	*p1;
	int	*p2;

	num1 = 24;
	num2 = 42;
	p1 = &num1;
	p2 = &num2;

	ft_swap(p1, p2);
	printf("x = %d, y = %d ", *p1, *p2);

	return (0);
}