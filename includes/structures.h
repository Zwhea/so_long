/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:01:44 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/24 13:14:14 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef struct s_player
{
	int			player;
	int			pos_x;
	int			pos_y;
	int			moves;
}				t_player;

typedef struct s_items
{
	int			collectibles;
	int			exit_game;
	int			bad_char;
}				t_items;

typedef struct s_map
{
	char		**map;
	char		**fake_map;
	int			map_width;
	int			map_heigth;
	t_items		items;
	t_player	player;
}				t_map;

typedef struct s_parsing_error
{
	bool		is_valid;
	bool		top_border;
	bool		bot_border;
	bool		left_border;
	bool		right_border;
}				t_parsing_error;

typedef struct s_set
{
	void		*mlx;
	void		*window;
	int			win_width;
	int			win_heigth;
}				t_set;

typedef struct s_t_walls
{
	void		*wall;
	void		*column;
	void		*b_bot_left;
	void		*b_bot_right;
	void		*b_left_extr;
	void		*b_left;
	void		*b_mid_bot;
	void		*b_mid_left;
	void		*b_mid_right;
	void		*b_mid_top;
	void		*b_right_extr;
	void		*b_right;
	void		*b_top_left;
	void		*b_top_right;
	void		*i_bot_extr;
	void		*i_bot_left;
	void		*i_bot_right;
	void		*i_mid_left;
	void		*i_mid_right;
	void		*i_mid_cross;
	void		*i_top_extr;
	void		*i_top_left;
	void		*i_top_right;
	void		*in_wall;
	void		*left_extr;
	void		*right_extr;
}				t_t_walls;

typedef struct s_t_player
{
	void		*link;
}				t_t_player;

typedef struct s_t_items
{
	void		*grass;
	void		*collect_open;
	void		*collect_closed;
	void		*exit_open;
	void		*exit_closed;
}				t_t_items;

typedef struct s_txtr
{
	t_t_walls	t_walls;
	t_t_player	t_player;
	t_t_items	t_items;
	int			img_w;
	int			img_h;
}				t_txtr;

typedef struct s_game
{
	t_map			map;
	t_parsing_error	parse_error;
	t_set			set;
	t_txtr			txtr;
}					t_game;

#endif