/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 22:48:57 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/03 22:58:26 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptint;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	ptint = malloc((max - min) * sizeof(int));
	if (ptint == NULL)
		return (NULL);
	i = min;
	j = 0;
	while (i < max)
	{
		ptint[j] = i;
		i++;
		j++;
	}
	return (ptint);
}
