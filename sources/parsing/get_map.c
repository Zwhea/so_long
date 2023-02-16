/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:15:32 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/16 18:46:47 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	get_alloc_size(char *av, t_game *game)
{
	int		fd;
	int		nb_bytes_read;
	char	c;

	fd = open_file(av);
	nb_bytes_read = 1;
	game->map.map_heigth = 1;
	game->map.map_width = 0;
	while (nb_bytes_read > 0)
	{
		nb_bytes_read = read(fd, &c, 1);
		if (nb_bytes_read == -1)
		{
			perror("read");
			close(fd);
			exit (1);
		}
		if (c == '\n')
			game->map.map_heigth++;
		game->map.map_width++;
	}
	close(fd);
}

static char	*get_map(char *av, char *tmp_map)
{
	int		fd;
	int		nb_bytes_read;
	int		i;
	char	c;

	fd = open_file(av);
	i = 0;
	nb_bytes_read = 1;
	while (nb_bytes_read > 0)
	{
		nb_bytes_read = read(fd, &c, 1);
		if (nb_bytes_read == -1)
		{
			perror("read");
			close(fd);
			exit (2);
		}
		if (nb_bytes_read != 0)
			tmp_map[i] = c;
		i++;
	}
	close(fd);
	return (tmp_map);
}

void	initialize_map(char *av, t_game *game)
{
	char	*tmp_map;
	char	*tmp_fakemap;

	get_alloc_size(av, game);
	tmp_map = ft_calloc(game->map.map_width, sizeof(char *));
	if (!tmp_map)
		exit (2);
	tmp_fakemap = ft_calloc(game->map.map_width, sizeof(char *));
	if (!tmp_fakemap)
		exit (2);
	tmp_map = get_map(av, tmp_map);
	tmp_fakemap = get_map(av, tmp_fakemap);
	game->map.map = ft_split(tmp_map, '\n');
	if (!game->map.map)
		exit (2);
	game->map.fake_map = ft_split(tmp_fakemap, '\n');
	if (!game->map.fake_map)
		exit (2);
}

void	is_valid_argument(int ac, char **av)
{
	if (ac == 1)
	{
		ft_dprintf(2, "Error\n");
		ft_dprintf(2, "warning: so_long must include a map\n");
		ft_dprintf(2, "usage: ./so_long \"file_name.ber\"\n");
		exit (1);
	}
	else if (ac > 2)
		ft_dprintf(2, "warning: the program will only use the first file\n");
	if (!check_extension(av[1], ".ber"))
	{
		ft_dprintf(2, "Error\n");
		ft_dprintf(2, "warning: the file must have .ber type\n");
		ft_dprintf(2, "usage: ./so_long \"file_name.ber\" \n");
		exit (1);
	}
}
