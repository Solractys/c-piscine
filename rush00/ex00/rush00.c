/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edalves- <edalves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:31:38 by edalves-          #+#    #+#             */
/*   Updated: 2025/03/16 15:11:23 by edalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	function(int i, int j, int y, int x);

void	rush(int x, int y)
{
	int		i;
	int		j;

	if (x < 1 || y < 1)
	{
		return ;
	}
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			function(i, j, y, x);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	function(int i, int j, int y, int x)
{
	if ((i == 0 || i == y - 1) && (j == 0 || j == x - 1))
		ft_putchar('o');
	else if (j == 0 || j == x - 1)
		ft_putchar('|');
	else if (i == 0 || i == y - 1)
		ft_putchar('-');
	else
		ft_putchar(' ');
}
