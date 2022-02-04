/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 01:12:00 by rwattana          #+#    #+#             */
/*   Updated: 2022/02/04 01:26:38 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char    *ft_strjoin(int size, char **strs, char *sep);

int     main(int argc,char **argv)
{
	char	*str;
	if (argc > 2)
	{
		str = ft_strjoin(argc - 1, argv + 1, "=|=");
		printf("%s \n", str);
		free(str);
	}
}
