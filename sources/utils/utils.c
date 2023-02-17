/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:47:16 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/17 13:53:27 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_struct_to_zero(t_game *game)
{
	ft_memset(game, 0, sizeof(t_game));
	ft_memset(&game->map, 0, sizeof(t_map));
	ft_memset(&game->set, 0, sizeof(t_set));
	ft_memset(&game->image, 0, sizeof(t_image));
	ft_memset(&game->texture, 0, sizeof(t_texture));
}

void	free_and_exit(t_game *game)
{
	ft_free((void **)game->map.map, game->map.map_heigth);
	exit (404);
}
