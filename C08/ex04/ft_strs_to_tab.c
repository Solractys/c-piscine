/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 06:14:17 by csilva-s          #+#    #+#             */
/*   Updated: 2025/04/04 06:26:41 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*copy;

	i = 0;
	len = ft_strlen(src);
	copy = malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[len] = '\0';
	return (copy);
}

s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	s_stock_str	*arr;
	int			i;
	int			j;

	i = 0;
	arr = malloc((ac + 1) * sizeof(s_stock_str));
	if (!arr)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		if (!arr[i].copy)
		{
			j = 0;
			while (j < i)
			{
				free(arr[j].copy);
				j++;
			}
			free(arr);
			return (NULL);
		}
		i++;
	}
	arr[ac].str = 0;
	return (arr);
}
