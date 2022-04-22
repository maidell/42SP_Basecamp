/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 07:42:42 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/22 18:39:54 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && (s1[counter] != '\0' || s2[counter] != '\0'))
	{
		if ((unsigned char)s1[counter] != (unsigned char)s2[counter])
			return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
		counter++;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int        ft_strncmp(char *s1, char *s2, unsigned int n);

int    main(void)
{
    char s1[] = "123toAAA";
    char s2[] = "123to";
    printf("s1: %s, s2: %s\n", s1, s2);
    printf("N = 0          | N = 2          | N = 6            | N = 9\n");
    printf("og_strncmp = %d | og_strncmp = %d | og_strncmp = %d | og_strncmp = %d\n",strncmp(s1, s2, 0), strncmp(s1, s2, 2), strncmp(s1, s2, 6), strncmp(s1, s2, 9));
    printf("ft_strncmp = %d | ft_strncmp = %d | ft_strncmp = %d | ft_strncmp = %d\n",ft_strncmp(s1, s2, 0), ft_strncmp(s1, s2, 2), ft_strncmp(s1, s2, 6), ft_strncmp(s1, s2, 9));
}