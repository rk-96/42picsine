/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 00:02:34 by rwattana          #+#    #+#             */
/*   Updated: 2022/01/30 00:06:58 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main()
{
	char	word[] = "this is the way";
	char	*ptword = word;
	int	stringlength = ft_strlen(ptword);
	
	printf("%d", stringlength);
	return 0;	
}
