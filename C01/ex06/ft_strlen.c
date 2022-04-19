/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 03:49:43 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/04/19 05:34:30 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
    int bts; // ela vai voltar qnts bytes tem na str

    bts = 1;
    while (str[bts] != '\0')
    {
        bts++;
    }
    
    bts++; // para contar o  byte nulo.
    
    return(bts); // retornar um valor numerico, isso retorna o valor contado no total.
}
