/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:45:13 by csilva-s          #+#    #+#             */
/*   Updated: 2025/03/18 22:59:01 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	if (b != 0)
	{
		c = *a / *b;
		d = *a % *b;
		*a = c;
		*b = d;
	}
	else
	{
		*a = 0;
		*b = 0;
	}
}
/*
int	main(void)
{
	int val = 2;
	int val2 = 2;
	int *a = &val;
	int *b = &val2;
	
	ft_ultimate_div_mod(a, b);
	printf("%d %d ", *a, *b);
}
*/
