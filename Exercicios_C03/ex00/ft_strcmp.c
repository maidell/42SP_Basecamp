/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 07:32:33 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/22 19:19:01 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	start;

	start = 0;
	while (s1[start] == s2[start] && s1[start] != '\0' && s2[start != '\0'])
		start++;
	return (s1[start - s2[start]]);
}

#include <stdio.h>
int main(void)
{
    char s0[] = "Quatroaaaaa";
    char s1[] = "Dezenas";
    
    printf("%d", ft_strcmp(s0, s1));
}