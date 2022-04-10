/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 01:31:17 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/10 04:58:29 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	validacao(int vazio, int asterisco, int x, int y);

void	rush(int x, int y)
{
	int	coluna;
	int	linha;

	linha = 1;
	while (linha <= y)
	{
		coluna = 1;
		while (coluna <= x)
		{
			if (linha == 1 && coluna == 1)
				ft_putchar('/');
			else if (linha == 1 && coluna == x)
				ft_putchar('\\');
			else if (coluna == 1 && linha == y)
				ft_putchar('\\');
			else if (linha == y && coluna == x)
				ft_putchar('/');
			else
				validacao(linha, coluna, x, y);
			coluna ++;
		}
		ft_putchar('\n');
		linha ++;
	}
}

void	validacao(int linha, int coluna, int x, int y)
{
	if ((linha > 1 && linha < y) && (coluna > 1 && coluna < x))
		ft_putchar(' ');
	else
		ft_putchar('*');
}
