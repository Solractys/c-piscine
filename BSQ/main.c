/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:15:00 by csilva-s          #+#    #+#             */
/*   Updated: 2025/04/02 21:14:32 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_print_map(char **map);
int		parse_first_line(char *file, char *empty, char *obstacle, char *full);
char	*read_file(char *file_name);
char	*ft_itoa(int nb);
char	**ft_read_line(char *buffer, int start_line);
int		ft_count_cols(char **map);
int		ft_count_rows(char **map);

typedef struct t_map
{
	int		rows;
	int		cols;
	char	empty;
	char	obstacle;
	char	full;
	char	**map;
}	t_map;

void	ft_print_map(char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			write(1, &map[i][j], 1);
			j++;
		}
		write(1, &map[i][j], 1);
		write(1, "\n", 1);
		i++;
	}
}

int	ft_count_cols(char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0')
			j++;
		i++;
	}
	return (j);
}

int	ft_count_rows(char **map)
{
	int	i;

	i = 0;
	while (map[i] != NULL)
		i++;
	return (i);
}

int	main(int arc, char **arv)
{
	t_map	map_info;
	int		start_line;
	char	*file;

	if (arc != 2)
	{
		write(1, "Usage: ./parser filename\n", 25);
		return (1);
	}
	file = read_file(arv[1]);
	if (file == NULL)
		return (1);
	start_line = parse_first_line(file, &map_info.empty,
			&map_info.obstacle, &map_info.full);
	if (start_line == 0)
		return (free(file), 1);
	map_info.map = ft_read_line(file, start_line);
	if (map_info.map == NULL)
		return (free(file), 1);
	ft_print_map(map_info.map);
	free(file);
	return (0);
}
