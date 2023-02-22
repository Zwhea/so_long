/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:20:23 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/22 19:57:33 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	end(t_game *g)
{
	destroy_images(g);
	mlx_destroy_window(g->set.mlx, g->set.window);
	ft_free((void **)g->map.map, g->map.map_heigth);
	free(g->set.mlx);
	exit(0);
}