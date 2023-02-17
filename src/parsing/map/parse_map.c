/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:12:25 by mmosca            #+#    #+#             */
/*   Updated: 2023/02/17 10:55:45 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/so_long.h"

static uint32_t	get_number_of_char_in_map(t_game *g, char **argv)
{
	uint32_t	size;
	int32_t		fd;
	int32_t		nb_bytes_read;
	char		c;

	fd = open_file(argv[1]);
	nb_bytes_read = 1;
	g->map.size.y = 1;
	size = 0;
	while (nb_bytes_read > 0)
	{
		nb_bytes_read = read(fd, &c, 1);
		if (nb_bytes_read == -1)
		{
			perror("read");
			exit(1);
		}
		if (c == '\n')
			g->map.size.y++;
		size++;
	}
	close(fd);
	return (size);
}

static char	*get_map(char *file, uint32_t map_size)
{
	char		*map;
	int32_t		fd;
	int32_t		nb_bytes_read;
	uint32_t	i;
	char		c;

	map = ft_calloc(map_size + 1, sizeof(char));
	if (!map)
		return (NULL);
	fd = open_file(file);
	nb_bytes_read = 1;
	i = 0;
	while (nb_bytes_read > 0)
	{
		nb_bytes_read = read(fd, &c, 1);
		if (nb_bytes_read == -1)
		{
			perror("read");
			exit(1);
		}
		else if (nb_bytes_read != 0)
			map[i] = c;
		i++;
	}
	return (map);
}

static void	initialize_map(t_game *g, char **argv)
{
	char		*tmp_map;
	uint32_t	size;

	size = get_number_of_char_in_map(g, argv);
	tmp_map = get_map(argv[1], size);
	if (!tmp_map)
		exit(1);
	g->map.map = ft_split(tmp_map, '\n');
	g->map.fake_map = ft_split(tmp_map, '\n');
	free(tmp_map);
}

void	parse_map(t_game *g, char **argv)
{
	initialize_map(g, argv);
	check_map(g);
}
