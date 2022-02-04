/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:38:39 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/03 16:38:56 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_recursive_factorial(int nb);

int     main(void)
{
	for (int i = -1; i < 13; i++)
		printf("%d!: %d\n", i, ft_recursive_factorial(i));
	return (0);
}
