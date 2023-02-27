/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:13:32 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/25 23:51:57 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	main(int ac, char **av)
{
	t_game	game;

	init_structs(&game);
	parsing(&game, ac, av);
	render_game(&game);
	return (0);
}
