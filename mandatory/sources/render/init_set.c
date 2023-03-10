/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:17:53 by twang             #+#    #+#             */
/*   Updated: 2023/02/27 16:11:22 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static void	init_struct_set(t_game *game)
{
	game->set.win_heigth = game->map.map_heigth * IMG_HEIGHT;
	game->set.win_width = game->map.map_width * IMG_WIDTH;
}

static void	init_mlx(t_game *game)
{
	game->set.mlx = mlx_init();
	if (!game->set.mlx)
	{
		free_and_exit(game);
	}
	game->set.window = mlx_new_window(game->set.mlx, game->set.win_width,
			game->set.win_heigth, "so_long");
}

static void	init_textures(t_game *game)
{
	xpm_items_get(game);
	xpm_player_get(game);
	xpm_b_walls_get(game);
	xpm_b_i_walls_get(game);
	xpm_i_walls_get(game);
}

void	init_set(t_game *game)
{
	init_struct_set(game);
	init_mlx(game);
	init_textures(game);
}
