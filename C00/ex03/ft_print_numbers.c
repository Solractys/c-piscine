/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 19:56:50 by csilva-s          #+#    #+#             */
/*   Updated: 2025/03/16 07:08:49 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	char	first;
	char	last;

	first = '0';
	last = '9';
	while (first <= last)
	{
		write (1, &first, 1);
		first++;
	}
}
