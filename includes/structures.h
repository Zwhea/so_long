/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:01:44 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/16 16:38:00 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef struct s_map
{
	char		**map;
	char		**fake_map;
	size_t		map_width;
	size_t		map_heigth;
	size_t		player;
	size_t		pos_x_player;
	size_t		pos_y_player;
	size_t		collectibles;
	size_t		exit_game;
	size_t		bad_char;
}				t_map;

typedef struct s_parsing_error
{
	bool		is_valid;
	bool		top_border;
	bool		bot_border;
	bool		left_border;
	bool		right_border;
}				t_parsing_error;

typedef struct s_game
{
	t_map			map;
	t_parsing_error	parse_error;
}					t_game;

#endif