/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:01:44 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/07 11:04:48 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

# define IDLE_NB_SPRITE 6
# define SLIME_NB_SPRITE 6
# define MV_NB_SPRITE 10

typedef struct s_player
{
	int			player;
	int			pos_x;
	int			pos_y;
	int			moves;
	int			lifes;
}				t_player;

typedef struct s_slimes_pos
{
	int		pos_x;
	int		pos_y;
}			t_slimes_pos;

typedef struct s_slimes
{
	int				slimes;
	t_slimes_pos	*slimes_pos;
}					t_slimes;

typedef struct s_items
{
	int			collectibles;
	int			bad_char;
	int			exit_game;
	int			ext_pos_x;
	int			ext_pos_y;
}				t_items;

typedef struct s_map
{
	char		**map;
	char		**fake_map;
	int			map_width;
	int			map_heigth;
	t_items		items;
	t_player	player;
	t_slimes	slimes;
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
	void		*b_left_s;
	void		*b_mid_bot;
	void		*b_mid_left;
	void		*b_mid_right;
	void		*b_mid_top;
	void		*b_right_extr;
	void		*b_right;
	void		*b_right_s;
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
	void		*link_left;
	void		*link_right;
	void		*link_back;
	void		*link_collect;
	void		*link_exit;
	void		*link_hurt;
}				t_t_player;

typedef struct s_t_items
{
	void		*grass;
	void		*collect_open;
	void		*collect_closed;
	void		*exit_open;
	void		*exit_closed;
	void		*you_won;
	void		*game_over;
}				t_t_items;

typedef struct s_sprite
{
	void	*sprite;
}			t_sprite;

typedef struct s_txtr
{
	t_t_walls	t_walls;
	t_t_player	t_player;
	t_t_items	t_items;
	t_sprite	idle[IDLE_NB_SPRITE];
	t_sprite	idle_left[IDLE_NB_SPRITE];
	t_sprite	idle_right[IDLE_NB_SPRITE];
	t_sprite	mv_left[MV_NB_SPRITE];
	t_sprite	mv_right[MV_NB_SPRITE];
	t_sprite	mv_up[MV_NB_SPRITE];
	t_sprite	mv_down[MV_NB_SPRITE];
	t_sprite	sl_mv_left[SLIME_NB_SPRITE];
	t_sprite	sl_mv_right[SLIME_NB_SPRITE];
	t_sprite	sl_mv_up[SLIME_NB_SPRITE];
	t_sprite	sl_mv_down[SLIME_NB_SPRITE];
	t_sprite	link_left_hurt[SLIME_NB_SPRITE];
	t_sprite	link_right_hurt[SLIME_NB_SPRITE];
	t_sprite	link_down_hurt[SLIME_NB_SPRITE];
	t_sprite	link_up_hurt[SLIME_NB_SPRITE];
	t_sprite	hearts[3];
	int			img_w;
	int			img_h;
}				t_txtr;

typedef struct s_directions
{
	bool		left;
	bool		right;
	bool		down;
	bool		hurt;
}				t_directions;

typedef struct s_game
{
	t_map			map;
	t_parsing_error	parse_error;
	t_set			set;
	t_txtr			txtr;
	t_directions	directions;
	bool			end;
}					t_game;

#endif