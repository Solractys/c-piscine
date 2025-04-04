/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 21:04:25 by csilva-s          #+#    #+#             */
/*   Updated: 2025/04/02 21:14:55 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi(char *name)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (name[i] >= '0' && name[i] <= '9')
	{
		res = res * 10 + (name[i] - '0');
		i++;
	}
	return (res);
}

char	*ft_itoa(int nb)
{
	int		i;
	int		tmp;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	tmp = nb;
	while (tmp > 0)
	{
		tmp = tmp / 10;
		i++;
	}
	str = malloc(i + 1);
	while (nb > 0)
	{
		str[i - 1] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	str[j] = '\0';
	return (str);
}

int	ft_count_lines(char *buffer)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

void	free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i] != NULL)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
