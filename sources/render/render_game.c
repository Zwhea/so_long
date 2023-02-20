/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:38:48 by twang             #+#    #+#             */
/*   Updated: 2023/02/20 16:20:12 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	render_core(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map.map[i])
	{
		j = 0;
		while (game->map.map[i][j])
		{
			display_image(game, game->texture.grass, i, j);
			if (game->map.map[i][j] == wall)
				display_wall(game, i, j);
			if (game->map.map[i][j] == collectible)
				display_collectible(game, i, j);
			if (game->map.map[i][j] == exit_game)
				display_exit_game(game, i, j);
			if (game->map.map[i][j] == player)
				display_player(game, i, j);
			j++;
		}
		i++;
	}
}

void	render_game(t_game *game)
{
	init_set(game);
	render_core(game);
	mlx_loop(game->set.mlx);
}
