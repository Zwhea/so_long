/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:13:32 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/01 17:18:15 by twang            ###   ########.fr       */
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

/*	TODO: il y a du leaks still reachable dans le cas d'un map unsolvable, verif 
	free correctement a la fin de parsing*/