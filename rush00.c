/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edalves- <edalves-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:31:38 by edalves-          #+#    #+#             */
/*   Updated: 2025/03/15 17:51:03 by bde-sa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int largura, int altura)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < altura)
    	{
		while (j < largura)
		{
			if ((i == 0 || i == altura - 1) && (j == 0 || j == largura - 1))
				ft_putchar('o');
            else if (i == 0 || i == altura - 1)
				ft_putchar('-');
			else if (j == 0 || j == largura - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
            		j++;
        	}

        ft_putchar('\n');
        i++;
    	}
}