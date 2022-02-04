/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:14:41 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/03 23:20:34 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*ptint;
	int	i;

	i = 0;
	printf("%d \n", ft_ultimate_range(&ptint, 0, 13));
	while (i < 13)
	{	
		printf("%d \n", ptint[i++]);
	}
	free(ptint);
	return (0);
}
