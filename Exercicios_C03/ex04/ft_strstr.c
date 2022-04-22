/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:24:34 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/22 09:53:30 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	if (to_find[x] == '\0')
	{
		return (str);
	}
	while (str[x] != '\0')
	{
		y = 0;
		while (str[x + y] == to_find[y])
		{
			if (to_find[y + 1] == '\0')
			{
				return (&str[x]);
			}
			y++;
		}
		x++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
    char s0[] = "Are you sure about that?";
    char s1[] = "Are";
    printf("%s", ft_strstr(s0, s1));
	printf("\n");
}
