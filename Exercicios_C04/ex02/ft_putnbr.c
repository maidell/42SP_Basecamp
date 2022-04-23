/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 00:10:35 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/23 08:25:38 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_int(int i)
{
	char	c;

	c = '0';
	c = c + i;
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	i;

	i = 1;
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	while (i <= nb / 10)
		i = i * 10;
	while (i >= 1)
	{
		ft_putchar_int(nb / i);
		nb = nb - (nb / i) * i;
		i = i / 10;
	}
}

int main(void)
{
    ft_putnbr(-2147483648);
}
