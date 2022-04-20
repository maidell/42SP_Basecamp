/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:58:05 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/20 05:52:40 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int	main(void)
{
	char src_original[] ="12345678910";
	char dest_original[]="mateus";
    char src[]="12345678910";
    char dest[]="mateus";
    printf("original:%s\n", strcpy(dest_original,src_original));
    printf("myfunction:%s\n", ft_strcpy(dest,src));
}