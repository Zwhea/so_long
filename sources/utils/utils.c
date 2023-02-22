/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:47:16 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/22 18:36:26 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	display_image(t_game *game, void *image, int i, int j)
{
	mlx_put_image_to_window(game->set.mlx, game->set.window, image,
		IMG_WIDTH * j, IMG_HEIGHT * i);
}

void	init_structs(t_game *game)
{
	ft_memset(game, 0, sizeof(t_game));
	ft_memset(&game->map, 0, sizeof(t_map));
	ft_memset(&game->set, 0, sizeof(t_set));
	ft_memset(&game->txtr, 0, sizeof(t_txtr));
	ft_memset(&game->txtr.items, 0, sizeof(t_items));
	ft_memset(&game->txtr.player, 0, sizeof(t_player));
	ft_memset(&game->txtr.walls, 0, sizeof(t_walls));
}

void	free_and_exit(t_game *game)
{
	ft_free((void **)game->map.map, game->map.map_heigth);
	exit (404);
}
