/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:13:32 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/22 19:15:56 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	main(int ac, char **av)
{
	t_game	game;

	init_structs(&game);
	parsing(&game, ac, av);
	if (game.parse_error.is_valid == false)
		free_and_exit(&game);
	render_game(&game);
	mlx_hook(game.set.window, esc_key, 1L<<0, end, &game.set);
	ft_free((void **)game.map.map, game.map.map_heigth);
	return (0);
}
