/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:06:19 by csilva-s          #+#    #+#             */
/*   Updated: 2025/04/02 21:02:49 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_atoi(char *name);
int		ft_strlen(char *str);
int		ft_count_lines(char *buffer);
char	*ft_itoa(int nb);

#define BUFFER_SIZE 1024

char	*alloc_and_copy(char *buf, char *temp, int total_size, int ret)
{
	char	*new_buf;
	int		i;

	new_buf = malloc(total_size + ret + 1);
	if (!new_buf)
		return (NULL);
	i = -1;
	while (++i < total_size)
		new_buf[i] = buf[i];
	i = -1;
	while (++i < ret)
		new_buf[total_size + i] = temp[i];
	new_buf[total_size + ret] = '\0';
	free(buf);
	return (new_buf);
}

char	*read_file(char *filename)
{
	int		fd;
	int		ret;
	int		total_size;
	char	*buf;
	char	temp[BUFFER_SIZE + 1];

	total_size = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (write(1, "open() failed\n", 14), NULL);
	buf = malloc(1);
	if (!buf)
		return (close(fd), NULL);
	buf[0] = '\0';
	ret = read(fd, temp, BUFFER_SIZE);
	while (ret > 0)
	{
		temp[ret] = '\0';
		buf = alloc_and_copy(buf, temp, total_size, ret);
		total_size += ret;
		ret = read(fd, temp, BUFFER_SIZE);
	}
	close(fd);
	return (buf);
}

int	parse_first_line(char *buffer, char *empty, char *obstacle, char *full)
{
	int	i;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (i < 4)
		return (write(2, "map error\n", 10), 0);
	*full = buffer[i - 1];
	*obstacle = buffer[i - 2];
	*empty = buffer[i - 3];
	if (*full == *obstacle || *full == *empty || *empty == *obstacle)
		return (0);
	return (i + 1);
}

char	**ft_read_line(char *buffer, int start_line)
{
	int		j;
	int		k;
	char	**map;

	j = 0;
	while (buffer[start_line] && buffer[start_line] != '\n')
		start_line++;
	map = malloc(sizeof(char *) * ft_count_lines(buffer));
	if (!map)
		return (NULL);
	while (buffer[start_line])
	{
		map[j] = malloc(ft_strlen(buffer) + 1);
		if (!map[j])
			return (free(map), NULL);
		k = 0;
		while (buffer[start_line] && buffer[start_line] != '\n')
			map[j][k++] = buffer[start_line++];
		map[j++][k] = '\0';
		start_line++;
	}
	map[j] = NULL;
	return (map);
}
