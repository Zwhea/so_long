# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: Invalid date        by                   #+#    #+#              #
#    Updated: 2023/02/21 17:27:32 by wangthea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include config/headers.mk
include config/sources.mk

#------------------------------------------------------------------------------#

NAME		=	so_long
OS			=	$(shell uname)
DEBUG		=	no

#------------------------------------------------------------------------------#

INC_DIR		=	includes
LIB_DIR		=	librairies
SRC_DIR		=	sources
OBJ_DIR		=	.objects
LIBFT_DIR	=	$(LIB_DIR)/libft

#---------------------------------------------------------------------------------------#

ifeq ($(OS), Darwin)
MLX_DIR 	=	$(LIB_DIR)/mlx_mac
else ifeq ($(OS), Linux)
MLX_DIR 	=	$(LIB_DIR)/mlx_linux
endif

#---------------------------------------------------------------------------------------#

CFLAGS		=	-Wall -Wextra -Werror -O2 -I $(LIBFT_DIR) -I $(MLX_DIR) -I $(INC_DIR)
DFLAGS		=	-g3 -fsanitize=address
MLX_FLAGS	=	-L $(MLX_DIR)

#---------------------------------------------------------------------------------------#

ifeq ($(DEBUG), yes)
CFLAGS 		+=	$(DFLAGS)
endif

ifeq ($(OS), Darwin)
MLX_FLAGS 	+=	-l mlx -framework OpenGL -framework AppKit
else ifeq ($(OS), Linux)
MLX_FLAGS 	+=	-l Xext -l X11 -l m
endif

#---------------------------------------------------------------------------------------#

LIBFT	=	$(LIBFT_DIR)/libft.a
MLX		=	$(MLX_DIR)/libmlx.a

#---------------------------------------------------------------------------------------#

OBJECTS	=	$(addprefix $(OBJ_DIR)/, $(SOURCES:.c=.o))

#---------------------------------------------------------------------------------------#

.DEFAULT_GOAL = all

#---------------------------------------------------------------------------------------#

all:
	$(MAKE) libs
	$(MAKE) $(NAME)

$(OBJ_DIR)/%.o: %.c $(HEADERS) $(LIBFT) $(MLX)
	@ mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS) $(LIBFT)
	$(CC) $(CFLAGS) $(MLX_FLAGS)  $^ -o $@

libs:
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(MLX_DIR)

debug:
	$(MAKE) re DEBUG=yes

re:
	$(MAKE) fclean
	$(MAKE) all

#---------------------------------------------------------------------------------------#

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(MLX_DIR) clean
	$(RM) -rf $(OBJECTS)

fclean:
	$(MAKE) clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

#---------------------------------------------------------------------------------------#

norme:
	norminette $(INC_DIR) $(LIBFT_DIR) $(SRC_DIR)

#---------------------------------------------------------------------------------------#

.PHONY: all libs debug re clean fclean norme
 