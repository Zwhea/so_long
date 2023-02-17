/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enums.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:01:25 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/17 15:13:11 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENUMS_H
# define ENUMS_H

typedef enum e_errors
{
	no_player,
	too_much_player,
	no_collectibles,
	no_exit,
	too_much_exit,
	have_bad_char,
	no_map,
	bad_size,
	bad_format,
	top_border,
	bottom_border,
	left_border,
	right_border,
	unsolvable
}			t_errors;

typedef enum e_tile_type
{
	space		=	'0',
	wall		=	'1',
	collectible	=	'C',
	player		=	'P',
	exit_game	=	'E'
}				t_tile;

typedef enum e_keycode
{
	a_key		=	0,
	s_key		=	1,
	d_key		=	2,
	f_key		=	3,
	h_key		=	4,
	g_key		=	5,
	z_key		=	6,
	x_key		=	7,
	c_key		=	8,
	v_key		=	9,
	b_key		=	11,
	q_key		=	12,
	w_key		=	13,
	e_key		=	14,
	r_key		=	15,
	y_key		=	16,
	t_key		=	17,
	one_key		=	18,
	two_key		=	19,
	three_key	=	20,
	four_key	=	21,
	six_key		=	22,
	five_key	=	23,
	equal_key	=	24,
	nine_key	=	25,
	seven_key	=	26,
	minus_key	=	27,
	eight_key	=	28,
	zero_key	=	29,
	cbracket_key=	30,
	o_key		=	31,
	u_key		=	32,
	obracket_key=	33,
	i_key		=	34,
	p_key		=	35,
	enter_key	=	36,
	l_key		=	37,
	j_key		=	38,
	quote_key	=	39,
	k_key		=	40,
	semico_key	=	41,
	pipe_key	=	42,
	comma_key	=	43,
	slash_key	=	44,
	n_key		=	45,
	m_key		=	46,
	dot_key		=	47,
	tab_key		=	48,
	space_key	=	49,
	tilde_key	=	50,
	del_key		=	51,
	esc_key		=	53,
	left_key	=	123,
	right_key	=	124,
	down_key	=	125,
	up_key		=	126,
	ctrl_key	=	256,
	maj_l_key	=	257,
	maj_r_key	=	258,
	cmd_l_key	=	259,
	cmd_r_key	=	260,
	opt_l_key	=	261,
	opt_r_key	=	262,
	majlock_key	=	272,
	fn_key		=	279
}				t_keycode;

#endif