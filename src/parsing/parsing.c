/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:33:27 by mmosca            #+#    #+#             */
/*   Updated: 2023/02/20 20:11:23 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/so_long.h"

static bool	check_if_arguments_is_valid(int32_t argc, char **argv)
{
	if (argc < 2)
	{
		ft_dprintf(2, RED"Error\n"END);
		warn("so_long must include a map");
		usage();
		return (false);
	}
	else if (argc > 2)
		warn("the program will only use the first file");
	if (!check_extension(argv[1], ".ber"))
	{
		warn("the file must have .ber type");
		usage();
		return (false);
	}
	return (true);
}

void	parsing(t_game *g, int32_t argc, char **argv)
{
	if (check_if_arguments_is_valid(argc, argv) == false)
		exit(1);
	parse_map(g, argv);
}
