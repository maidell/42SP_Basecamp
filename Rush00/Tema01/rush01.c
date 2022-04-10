/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 05:54:24 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/10 07:00:57 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	box01(int line, int column, int x, int y);

void	rush(int x, int y)
{
	int line;
	int column;

	line = 1;
	while	(line <= y)
	{
		column = 1;
		while (column <= x)
		{
			box01 (line, column, x, y);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}

void	box01(int line, int column, int x, int y)
	{
		if (line == 1 && column == 1)
			ft_putchar('o');
		else if (column == 1 && line == y)
			ft_putchar('o');
		else if ((line == 1 & column < x) || (line == y && column < x))
			ft_putchar('-');		
		else if (line == 1 && column == x)
			ft_putchar('o');		
		else if ((column == 1 && line > 1) && (line < y))
			ft_putchar('|');
		else if ((line > 1 && line < y) && (column > 1 && column < x))
			ft_putchar(' ');
		else if ((column == x && line > 1) && (line < y))
			ft_putchar('|');
		else if (line == y && column == x)
			ft_putchar('o');
		
		
	}
	