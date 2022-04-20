/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:57:25 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/20 05:54:14 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 65) || (str[c] > 90))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

int main(void)
{
	int n;
	char str[] = "AaBbCc";
	n = ft_str_is_uppercase(str);
	printf("%d\n",n);
}