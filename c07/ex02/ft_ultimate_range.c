/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:02:26 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/03 23:13:48 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptint;
	int	i;
	int	j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptint = (int *)malloc((max - min) * sizeof(int));
	if (ptint == NULL)
		return (-1);
	i = min;
	j = 0;
	while (i < max)
		ptint[j++] = i++;
	*range = ptint;
	return (j);
}
