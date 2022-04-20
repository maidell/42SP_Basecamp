/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:57:32 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/20 05:54:03 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 97) || (str[c] > 122))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

int main(void)
{
	int t;
	char str[] = "AaBbCcDd";
	t = ft_str_is_lowercase(str);
	printf("%d\n",t);
}