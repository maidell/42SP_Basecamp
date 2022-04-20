/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:57:39 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/20 05:53:49 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 48 ) || (str[c] > 57 ))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

int main(void)
{
	int num;
	char str[] = "123Ab";
	num = ft_str_is_numeric(str);
	printf("%d\n",num);
}