/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.character                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:57:19 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/20 06:01:19 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	character;

	character = 0;
	while (str[character] != '\0')
	{
		if ((str[character] < 32) || (str[character] > 126))
		{
			return (0);
		}
		character++;
	}
	return (1);
}

int main(void)
{
	int g;
	char str[] = "";
	g = ft_str_is_printable(str);
	printf("%s\n",str);
	printf("%d\n",g);
}