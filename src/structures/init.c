/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:53:44 by mmosca            #+#    #+#             */
/*   Updated: 2023/02/16 22:03:24 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/so_long.h"

static void	init_mlx(t_game *g)
{
	g->mlx = mlx_init();
	if (!g->mlx)
		exit(1);
	g->window = mlx_new_window(g->mlx, 100, 100, "so_long");
}

void	init_struct(t_game *g)
{
	ft_memset(g, 0, sizeof(t_game));
	ft_memset(&g->map, 0, sizeof(t_map));
	ft_memset(&g->map.items, 0, sizeof(t_items));
	ft_memset(&g->map.player, 0, sizeof(t_player));
	ft_memset(&g->map.size, 0, sizeof(t_vec2i));
	ft_memset(&g->error, 1, sizeof(t_error));
	init_mlx(g);
}
