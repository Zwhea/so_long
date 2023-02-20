/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:28:45 by twang             #+#    #+#             */
/*   Updated: 2023/02/20 18:14:00 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_image(t_game *game, void *image, int i, int j)
{
	mlx_put_image_to_window(game->set.mlx, game->set.window, image,
		game->texture.img_width * j, game->texture.img_width * i);
}

void	display_wall(t_game *game, int i, int j)
{
	if (i == 0 && j == 0)
		display_image(game, game->texture.topleft_corner, i, j);
	else if (i == 0 && j == game->map.map_width - 1)
		display_image(game, game->texture.topright_corner, i, j);
	else if (i == game->map.map_heigth - 1 && j == 0)
		display_image(game, game->texture.botleft_corner, i, j);
	else if (i == game->map.map_heigth - 1 && j == game->map.map_width - 1)
		display_image(game, game->texture.botright_corner, i, j);
	else if (i != 0 && i != game->map.map_heigth - 1 && j == 0)
		display_image(game, game->texture.left_border, i, j);
	else if (i != 0 && i != game->map.map_heigth - 1
		&& j == game->map.map_width - 1)
		display_image(game, game->texture.right_border, i, j);
	else if (i != 0 && i == game->map.map_heigth - 1 && j != 0 && j != game->map.map_width - 1 && game->map.map[i - 1][j] == wall)
		display_image(game, game->texture.middle_down, i, j);
	else if (i == 0 && i != game->map.map_heigth - 1 && j != 0 && j != game->map.map_width - 1 && game->map.map[i + 1][j] == wall)
		display_image(game, game->texture.middle_up, i, j);
	else if (i != 0 && i != game->map.map_heigth - 1 && j != 0 && j != game->map.map_width - 1)
	{
		if (game->map.map[i + 1][j] != wall && game->map.map[i - 1][j] != wall && game->map.map[i][j + 1] != wall && game->map.map[i][j - 1] != wall)
			display_image(game, game->texture.column, i, j);
		else if (game->map.map[i + 1][j] == wall && game->map.map[i - 1][j] != wall && game->map.map[i][j + 1] == wall && game->map.map[i][j - 1] != wall)
			display_image(game, game->texture.topleft_corner, i, j);
		else if (game->map.map[i + 1][j] == wall && game->map.map[i - 1][j] != wall && game->map.map[i][j + 1] != wall && game->map.map[i][j - 1] == wall)
			display_image(game, game->texture.topright_corner, i, j);
		else if (game->map.map[i + 1][j] != wall && game->map.map[i - 1][j] == wall && game->map.map[i][j + 1] == wall && game->map.map[i][j - 1] != wall)
			display_image(game, game->texture.botleft_corner, i, j);
		else if (game->map.map[i + 1][j] != wall && game->map.map[i - 1][j] == wall && game->map.map[i][j + 1] != wall && game->map.map[i][j - 1] == wall)
			display_image(game, game->texture.botright_corner, i, j);
		else if (game->map.map[i + 1][j] == wall && game->map.map[i - 1][j] == wall && game->map.map[i][j + 1] != wall && game->map.map[i][j - 1] != wall)
			display_image(game, game->texture.middle_border, i, j);
		else
			display_image(game, game->texture.wall, i, j);
	}
	else
		display_image(game, game->texture.wall, i, j);
}

void	display_collectible(t_game *game, int i, int j)
{
	/*
	si les collectibles sont recuperes ou non:
	- affiche collectible closed == pas recup
	- affiche collectible open == recup
	*/
	display_image(game, game->texture.collectible_closed, i, j);
}

void	display_exit_game(t_game *game, int i, int j)
{
	/*
	si les collectibles sont recuperes ou non:
	- affiche exit_closed == pas recup
	- affiche exit open == tout recup
	*/
	display_image(game, game->texture.exit_closed, i, j);
}

void	display_player(t_game *game, int i, int j)
{
	/*
		voir comment afficher les mouvements!! 
	*/
	display_image(game, game->texture.link, i, j);
}