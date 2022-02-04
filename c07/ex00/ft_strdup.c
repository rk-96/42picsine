/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 22:04:51 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/03 22:22:27 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptstr;
	int		i;

	ptstr = (char *)malloc(ft_strlen(src + 1) * sizeof(char));
	if (ptstr == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		ptstr[i] = src[i];
		i++;
	}
	ptstr[i] = '\0';
	return (ptstr);
}
