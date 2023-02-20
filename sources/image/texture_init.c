/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:31:09 by twang             #+#    #+#             */
/*   Updated: 2023/02/20 18:07:24 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	xpm_background_get(t_game *game)
{
	game->texture.grass = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/grass.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
}

void	xpm_wall_get(t_game *game)
{
	game->texture.wall = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/wall.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
	game->texture.topleft_corner = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/topleft_corner.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
	game->texture.topright_corner = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/topright_corner.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
	game->texture.botleft_corner = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/botleft_corner.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
	game->texture.botright_corner = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/botright_corner.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
	game->texture.left_border = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/left_border.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
	game->texture.right_border = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/right_border.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
	game->texture.column = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/column.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
	game->texture.middle_border = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/middle_border.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
	game->texture.middle_border_down = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/middle_border_down.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
	game->texture.middle_border_up = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/middle_border_up.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
	game->texture.middle_down = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/middle_down.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
	game->texture.middle_up = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/middle_up.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
}

void	xpm_assets_get(t_game *game)
{
	game->texture.collectible_closed = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/collectible_closed.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
	game->texture.exit_closed = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/exit_closed.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
}

void	xpm_character_get(t_game *game)
{
	game->texture.link = mlx_xpm_file_to_image(game->set.mlx,
		"./assets/xpm/link.xpm", &game->texture.img_width,
		&game->texture.img_heigth);
}
