/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:08:22 by mmosca            #+#    #+#             */
/*   Updated: 2023/02/17 11:04:07 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int32_t	main(int32_t argc, char **argv)
{
	t_game	game;

	init_struct(&game);
	parsing(&game, argc, argv);
	mlx_loop(game.mlx);
	return (0);
}
