/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:13:32 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/20 13:37:45 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_game	game;

	is_valid_argument(ac, av);
	set_struct_to_zero(&game);
	initialize_map(av[1], &game);
	check_map(&game);
	if (game.parse_error.is_valid == false)
		free_and_exit(&game);
	render_game(&game);
	ft_free((void **)game.map.map, game.map.map_heigth);
	return (0);
}
