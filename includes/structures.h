/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:01:44 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/21 09:49:30 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef struct	s_map
{
	char		**map;
	char		**fake_map;
	int			map_width;
	int			map_heigth;
	int			player;
	int			pos_x_player;
	int			pos_y_player;
	int			collectibles;
	int			exit_game;
	int			bad_char;
}				t_map;

typedef struct	s_parsing_error
{
	bool		is_valid;
	bool		top_border;
	bool		bot_border;
	bool		left_border;
	bool		right_border;
}				t_parsing_error;

typedef struct	s_set
{
	void		*mlx;
	void		*window;
	int			win_width;
	int			win_heigth;
}				t_set;

typedef struct	s_image
{
	void		*image;
	void		*address;
	int			bits_per_pixel;
	int			line_length;
	int			endian;
}				t_image;

typedef struct	s_texture
{
	void		*grass;
	void		*wall;
	void		*topleft_corner;
	void		*topright_corner;
	void		*botleft_corner;
	void		*botright_corner;
	void		*in_botleft_corner;
	void		*in_botright_corner;
	void		*in_topleft_corner;
	void		*in_topright_corner;
	void		*left_border;
	void		*right_border;
	void		*middle_down;
	void		*middle_up;
	void		*middle_left;
	void		*middle_right;
	void		*middle_border;
	void		*middle_border_down;
	void		*middle_border_up;
	void		*in_middle_left;
	void		*in_middle_right;
	void		*left_extr;
	void		*right_extr;
	void		*border_left_extr;
	void		*border_right_extr;
	void		*column;
	void		*collectible_closed;
	void		*collectible_open;
	void		*exit_closed;
	void		*exit_open;
	void		*link;
	int			img_width;
	int			img_heigth;
}				t_texture;

typedef struct		s_game
{
	t_map			map;
	t_parsing_error	parse_error;
	t_set			set;
	t_image			image;
	t_texture		texture;
}					t_game;

#endif