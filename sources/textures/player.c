/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:23:53 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/22 18:38:06 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	xpm_player_get(t_game *g)
{
	g->txtr.player.link = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link.xpm", &g->txtr.img_w, &g->txtr.img_h);
}
