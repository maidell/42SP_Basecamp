/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:20:49 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/22 18:41:59 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	while (src[y] != '\0' && nb > 0)
	{
		dest[x] = src[y];
		y++;
		x++;
		nb--;
	}
	dest[x] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
    char s0[] = "Are you sure about that?";
    char s1[] = "Are you sure about that, baby?";
    int n;

    n = 0;
    printf("%s", ft_strncat(s0, s1, n));
	printf("\n");
}
