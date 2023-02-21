/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:01:11 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/21 17:08:01 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static bool	check_if_arguments_is_valid(int ac, char **av)
{
	if (ac < 2)
	{
		ft_dprintf(2, RED"Error\n"END);
		warn("so_long must include a map");
		usage();
		return (false);
	}
	else if (ac > 2)
		warn("the program will only use the first file");
	if (!check_extension(av[1], ".ber"))
	{
		warn("the file must have .ber type");
		usage();
		return (false);
	}
	return (true);
}

void	parsing(t_game *game, int ac, char **av)
{
	if (check_if_arguments_is_valid(ac, av) == false)
		exit(1);
	parse_map(game, av[1]);
}
