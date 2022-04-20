/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:57:02 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/20 06:03:52 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 65) && (str[c] <= 90))
		{
			str[c] += 32;
		}
		c++;
	}
	return (str);
}

int main(void)
{
	char str[] = "AaBbCc12";
	printf("%s\n",ft_strlowcase(str));
}
