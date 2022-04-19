/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 05:33:31 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/19 05:51:30 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	
}
{	
	int	index;
	int	cache;

	index = 0;
	size--;
	while (index < size)
	{
		cache = tab[index];
		tab[index] = tab[size];
		tab[size] = cache;
		size--;
		index++;
	}
}