/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:15:41 by mmosca            #+#    #+#             */
/*   Updated: 2023/02/16 21:24:17 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

# include <stdint.h>
# include <stdbool.h>

// -- Typedefs

typedef struct s_vec2i	t_vec2i;
typedef struct s_error	t_error;
typedef struct s_player	t_player;
typedef struct s_items	t_items;
typedef struct s_map	t_map;
typedef struct s_game	t_game;

// -- Structures

struct s_vec2i
{
	uint32_t	x;
	uint32_t	y;
};

struct s_error
{
	bool	is_valid;
	bool	top_border;
	bool	bottom_border;
	bool	left_border;
	bool	right_border;
};

struct s_player
{
	t_vec2i	pos;
};

struct s_items
{
	uint32_t	nb_players;
	uint32_t	nb_collectibles;
	uint32_t	nb_exits;
	uint32_t	nb_bad_char;
};

struct s_map
{
	t_player	player;
	t_vec2i		size;
	t_items		items;
	char		**map;
	char		**fake_map;
};

struct s_game
{
	t_map	map;
	t_error	error;
	void	*mlx;
	void	*window;
};

#endif //STRUCTURES_H
