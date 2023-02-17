/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:56:17 by mmosca            #+#    #+#             */
/*   Updated: 2023/02/17 12:28:18 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/so_long.h"

bool	is_collectible(char c)
{
	if (c == collectible)
		return (true);
	return (false);
}

bool	is_wall(char c)
{
	if (c == '1')
		return (true);
	return (false);
}

bool	is_space(char c)
{
	if (c == '0')
		return (true);
	return (false);
}

bool	is_player(char c)
{
	if (c == player)
		return (true);
	return (false);
}

bool	is_exit(char c)
{
	if (c == exit_game)
		return (true);
	return (false);
}

bool	is_valid_char(char c)
{
	if (c == '1' || c == '0' || c == is_player(c)
		|| c == is_collectible(c) || c == is_exit(c))
		return (true);
	return (false);
}
