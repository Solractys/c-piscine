/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsousa-n <rsousa-n@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:30:54 by rsousa-n          #+#    #+#             */
/*   Updated: 2025/03/20 00:20:00 by rsousa-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/*#include <stdio.h>

int main() {
    printf("%d\n", ft_str_is_numeric("123456"));  // Deve imprimir 1
    printf("%d\n", ft_str_is_numeric("123a56"));  // Deve imprimir 0
    printf("%d\n", ft_str_is_numeric(""));        
    return 0;
}*/
