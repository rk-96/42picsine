/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 00:57:27 by rwattana          #+#    #+#             */
/*   Updated: 2022/01/30 01:06:32 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main()
{
	int arrays[] = {0,1,2,3,4,5};
	int sizes = 6;
	int i = 0;

	ft_rev_int_tab(arrays, sizes);
	
	for (i=0; i<sizes; i++)
	{
		printf("%d", arrays[i]);
	}
	/*
	while (i <= 6)
	{
		printf("%d", arrays[i]);
		i++;
	}
	*/
	return (0);
}
