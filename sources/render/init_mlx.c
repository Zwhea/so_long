/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:17:53 by twang             #+#    #+#             */
/*   Updated: 2023/02/20 15:46:14 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void    init_struct_set(t_game *game)
{
    game->texture.img_width = 96;
    game->texture.img_heigth = 96;
    game->set.win_heigth = game->map.map_heigth * game->texture.img_heigth;
    game->set.win_width = game->map.map_width * game->texture.img_width;
}

static void    init_mlx(t_game *game)
{
    game->set.mlx = mlx_init();
	game->set.window = mlx_new_window(game->set.mlx, game->set.win_width,
        game->set.win_heigth, "so_long");
}

static void	init_textures(t_game *game)
{
	xpm_background_get(game);
	xpm_wall_get(game);
	xpm_assets_get(game);
}

void    init_set(t_game *game)
{
    init_struct_set(game);
    init_mlx(game);
    init_textures(game);
}