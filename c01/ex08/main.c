/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 01:24:37 by rwattana          #+#    #+#             */
/*   Updated: 2022/01/30 01:28:25 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main()
{
	int	ary[] = {31, 12, 32, 11};
	int	siz = 4;

	ft_sort_int_tab(ary, siz);

	for (int i = 0; i < siz; i++)
	{
		printf("%d ", ary[i]); 
	}
	return (0);
}
