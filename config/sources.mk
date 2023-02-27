# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    sources.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: twang <twang@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 16:02:29 by wangthea          #+#    #+#              #
#    Updated: 2023/02/27 11:23:47 by twang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES =	sources/events/end_game.c		\
			sources/events/motion_left.c	\
			sources/events/motion_right.c	\
			sources/events/motion_top.c		\
			sources/events/motion_bot.c		\
			sources/events/motions.c		\
			sources/image/destroy_items.c	\
			sources/image/destroy_player.c	\
			sources/image/destroy_wall.c	\
			sources/image/display_wall.c	\
			sources/parsing/backtrack_map.c	\
			sources/parsing/check_map.c		\
			sources/parsing/get_map.c		\
			sources/parsing/parsing.c		\
			sources/parsing/utils_check.c	\
			sources/render/init_set.c		\
			sources/render/render_game.c	\
			sources/textures/items.c		\
			sources/textures/player.c		\
			sources/textures/walls.c		\
			sources/utils/errors.c			\
			sources/utils/print.c			\
			sources/utils/utils.c			\
			sources/so_long.c