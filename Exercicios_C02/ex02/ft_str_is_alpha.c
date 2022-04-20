/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:57:45 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/20 05:53:33 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 65 || str[c] > 122 || (str[c] > 90 && str[c] < 97))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

int main(void)
{	
	char str[] = "AaBbCc"; 
	int intn;
	intn = ft_str_is_alpha(str);
	printf("%d\n",intn);
}
