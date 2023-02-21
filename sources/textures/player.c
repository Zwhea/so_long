/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:23:53 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/21 19:24:52 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	xpm_player_get(t_game *g)
{
	g->texture.player.link = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/link.xpm", IMG_WIDTH, IMG_HEIGHT);
}

