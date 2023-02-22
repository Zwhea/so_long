/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:30:03 by twang             #+#    #+#             */
/*   Updated: 2023/02/22 15:33:17 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static void	destroy_items(t_game *g)
{
	mlx_destroy_image(g->set.mlx, g->texture.items.collect_closed);// il n;y aura plus de close a la fin du jeu deja non?
	mlx_destroy_image(g->set.mlx, g->texture.items.collect_open);
	mlx_destroy_image(g->set.mlx, g->texture.items.exit_closed);// il n;y aura plus de close a la fin du jeu deja non?
	mlx_destroy_image(g->set.mlx, g->texture.items.exit_open);
	mlx_destroy_image(g->set.mlx, g->texture.items.grass);
}

static void	destroy_player(t_game *g)
{
	mlx_destroy_image(g->set.mlx, g->texture.player.link);
}

static void	destroy_border_walls(t_game *g)
{
	mlx_destroy_image(g->set.mlx, g->texture.walls.wall);
	mlx_destroy_image(g->set.mlx, g->texture.walls.column);
	mlx_destroy_image(g->set.mlx, g->texture.walls.b_bot_left);
	mlx_destroy_image(g->set.mlx, g->texture.walls.b_bot_right);
	mlx_destroy_image(g->set.mlx, g->texture.walls.b_left_extr);
	mlx_destroy_image(g->set.mlx, g->texture.walls.b_left);
	mlx_destroy_image(g->set.mlx, g->texture.walls.b_mid_bot);
	mlx_destroy_image(g->set.mlx, g->texture.walls.b_mid_left);
	mlx_destroy_image(g->set.mlx, g->texture.walls.b_mid_right);
	mlx_destroy_image(g->set.mlx, g->texture.walls.b_mid_top);
	mlx_destroy_image(g->set.mlx, g->texture.walls.b_right_extr);
	mlx_destroy_image(g->set.mlx, g->texture.walls.b_right);
	mlx_destroy_image(g->set.mlx, g->texture.walls.b_top_left);
	mlx_destroy_image(g->set.mlx, g->texture.walls.b_top_right);
}

static void	destroy_inner_walls(t_game *g)
{
	mlx_destroy_image(g->set.mlx, g->texture.walls.i_bot_extr);
	mlx_destroy_image(g->set.mlx, g->texture.walls.i_bot_left);
	mlx_destroy_image(g->set.mlx, g->texture.walls.i_bot_right);
	mlx_destroy_image(g->set.mlx, g->texture.walls.i_mid_left);
	mlx_destroy_image(g->set.mlx, g->texture.walls.i_mid_right);
	mlx_destroy_image(g->set.mlx, g->texture.walls.i_top_extr);
	mlx_destroy_image(g->set.mlx, g->texture.walls.i_top_left);
	mlx_destroy_image(g->set.mlx, g->texture.walls.i_top_right);
	mlx_destroy_image(g->set.mlx, g->texture.walls.in_wall);
}

void	destroy_images(t_game *g)
{
	destroy_items(g);
	destroy_player(g);
	destroy_border_walls(g);
	destroy_inner_walls(g);
}
