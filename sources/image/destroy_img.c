/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:30:03 by twang             #+#    #+#             */
/*   Updated: 2023/02/21 22:32:05 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	destroy_items(t_game *g)
{
	mlx_destroy_image(g->set.mlx, g->texture.items.collect_closed);// il n;y aura plus de close a la fin du jeu deja non?
	mlx_destroy_image(g->set.mlx, g->texture.items.collect_open);
	mlx_destroy_image(g->set.mlx, g->texture.items.exit_closed);// il n;y aura plus de close a la fin du jeu deja non?
	mlx_destroy_image(g->set.mlx, g->texture.items.exit_open);
	mlx_destroy_image(g->set.mlx, g->texture.items.grass);
}

void	destroy_player(t_game *g)
{
	mlx_destroy_image(g->set.mlx, g->texture.player.link);
}

void	destroy_walls(t_game *g)
{
	destroy_border_walls(g);
	//TODO: destroy all walls textures;
}

void	destroy_images(t_game *g)
{
	destroy_items(g);
	destroy_player(g);
	destroy_walls(g);
}
