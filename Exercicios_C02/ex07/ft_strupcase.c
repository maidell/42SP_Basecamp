/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:57:11 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/20 06:03:37 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] >= 97) && (str[n] <= 122))
		{
			str[n] -= 32;
		}
		n++;
	}
	return (str);
}

int main(void)
{
	char str[] = "AaBbCc";
	printf("%s\n",ft_strupcase(str));
}
