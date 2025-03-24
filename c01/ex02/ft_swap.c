/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:47:21 by csilva-s          #+#    #+#             */
/*   Updated: 2025/03/18 22:18:57 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int v = 2;
	int v2 = 5;
	int	*a = &v;
	int	*b = &v2;

	printf("%d | %d \n", *a, *b);
	ft_swap(a, b);
	printf("%d | %d ", *a, *b);
}
*/
