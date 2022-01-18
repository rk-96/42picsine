/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:31:20 by rwattana          #+#    #+#             */
/*   Updated: 2022/01/16 15:19:24 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptepsong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 00:21:07 by ptepsong          #+#    #+#             */
/*   Updated: 2022/01/16 14:31:14 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush00(int x, int y);
void	rush01(int x, int y);
void    rush02(int x, int y);
void    rush03(int x, int y);
void    rush04(int x, int y);

void	showrush00(void)
{
	rush00(5, 3);
	ft_putchar('\n');
	rush00(5, 1);
	ft_putchar('\n');
	rush00(1, 1);
	ft_putchar('\n');
	rush00(1, 5);
	ft_putchar('\n');
	rush00(4, 4);
	ft_putchar('\n');
}

void	showrush01(void)
{
	rush01(5, 3);
	ft_putchar('\n');
	rush01(5, 1);
	ft_putchar('\n');
	rush01(1, 1);
	ft_putchar('\n');
	rush01(1, 5);
	ft_putchar('\n');
	rush01(4, 4);
	ft_putchar('\n');
}

void	showrush02(void)
{
	rush02(5, 3);
	ft_putchar('\n');
	rush02(5, 1);
	ft_putchar('\n');
	rush02(1, 1);
	ft_putchar('\n');
	rush02(1, 5);
	ft_putchar('\n');
	rush02(4, 4);
	ft_putchar('\n');
}

void	showrush03(void)
{
	rush03(5, 3);
	ft_putchar('\n');
	rush03(5, 1);
	ft_putchar('\n');
	rush03(1, 1);
	ft_putchar('\n');
	rush03(1, 5);
	ft_putchar('\n');
	rush03(4, 4);
	ft_putchar('\n');
}

void	showrush04(void)
{
	rush04(5, 3); 
	ft_putchar('\n');
	rush04(5, 1); 
	ft_putchar('\n');
	rush04(1, 1); 
	ft_putchar('\n');
	rush04(1, 5); 
	ft_putchar('\n');
	rush04(4, 4); 
	ft_putchar('\n');
}

int	main(void)
{
	showrush00();
	showrush01();
	showrush02();
	showrush03();
	showrush04();
}
