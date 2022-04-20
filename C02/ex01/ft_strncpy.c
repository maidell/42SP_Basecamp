/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:57:52 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/20 05:53:12 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((src[count] != '\0') && (count < n))
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

int main(void)
{
    char src_original[]="0123456789";
    char dest_original[]="012345";
    char src[]="0123456789";
    char dest[]="012345";
    printf("original:%s\n", strncpy(dest_original,src_original, 6));
    printf("minha:%s\n", ft_strncpy(dest,src, 6));
}	