/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:43:50 by csilva-s          #+#    #+#             */
/*   Updated: 2025/03/18 22:44:01 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		*div = 0;
		*mod = 0;
	}
}
/*
int	main(void)
{
	int a = 2;
	int b = 0;
	int div, mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d  %d", div, mod);
}
*/
