/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:13:32 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/16 16:27:38 by wangthea         ###   ########.fr       */
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
	ft_free((void **)game.map.map, game.map.map_heigth);
	return (0);
}
