/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 22:53:36 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/03 22:57:23 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*ptint;
	int	i;

	ptint = ft_range(0, 13);
	i = 0;
	while (i < 13)
	{
		printf("%d \n", ptint[i]);
		i++;
	}
	free(ptint);
	return (0);
}
