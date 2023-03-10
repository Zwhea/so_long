# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: Invalid date        by                   #+#    #+#              #
#    Updated: 2023/02/28 18:16:33 by wangthea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include mandatory/config/headers.mk
include mandatory/config/sources.mk
include bonus/config_bonus/headers_bonus.mk
include bonus/config_bonus/sources_bonus.mk

#------------------------------------------------------------------------------#

NAME		=	so_long
OS			=	$(shell uname)
DEBUG		=	no
BONUS		=	no

#------------------------------------------------------------------------------#

INC_DIR		=	mandatory/includes
B_INC_DIR	=	bonus/includes_bonus
LIB_DIR		=	libraries
SRC_DIR		=	mandatory/sources
B_SRC_DIR	=	bonus/sources_bonus
OBJ_DIR		=	.objects
LIBFT_DIR	=	$(LIB_DIR)/libft

#---------------------------------------------------------------------------------------#

ifeq ($(OS), Darwin)
MLX_DIR 	=	$(LIB_DIR)/mlx_mac
else ifeq ($(OS), Linux)
MLX_DIR 	=	$(LIB_DIR)/mlx_linux
endif

#---------------------------------------------------------------------------------------#

ifeq ($(BONUS), no)
CFLAGS		=	-Wall -Wextra -Werror -I $(LIBFT_DIR) -I $(MLX_DIR) -I $(INC_DIR)
else
CFLAGS		=	-Wall -Wextra -Werror -I $(LIBFT_DIR) -I $(MLX_DIR) -I $(B_INC_DIR)
endif

DFLAGS		=	-g3 -fsanitize=address
MLX_FLAGS	=	-L $(MLX_DIR)

ifeq ($(OS), Darwin)
CFLAGS 		+=	-DMACOS
endif

#---------------------------------------------------------------------------------------#

ifeq ($(DEBUG), yes)
CFLAGS 		+=	$(DFLAGS)
endif

ifeq ($(OS), Darwin)
MLX_FLAGS 	+= -framework OpenGL -framework AppKit
else ifeq ($(OS), Linux)
MLX_FLAGS 	+= -l m -l Xext -l X11 -I $(MLX_DIR)
endif

#---------------------------------------------------------------------------------------#

LIBFT	=	$(LIBFT_DIR)/libft.a
MLX		=	$(MLX_DIR)/libmlx.a

#---------------------------------------------------------------------------------------#

ifeq ($(BONUS), no)
OBJECTS	=	$(addprefix $(OBJ_DIR)/, $(SOURCES:.c=.o))
else 
OBJECTS	=	$(addprefix $(OBJ_DIR)/, $(SOURCES_BONUS:.c=.o))
endif

#---------------------------------------------------------------------------------------#

.DEFAULT_GOAL = all

#---------------------------------------------------------------------------------------#

all:
	$(MAKE) libs
	$(MAKE) $(NAME)

$(NAME): $(OBJECTS) $(LIBFT) $(MLX)
	$(CC) $^ $(CFLAGS) $(MLX_FLAGS) -o $@

$(OBJ_DIR)/%.o: %.c
	@ mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@


libs:
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(MLX_DIR)

debug:
	$(MAKE) re DEBUG=yes BONUS=yes
	
bonus:
	$(MAKE) re BONUS=yes

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
	norminette $(INC_DIR) $(LIBFT_DIR) $(SRC_DIR) $(B_INC_DIR) $(B_SRC_DIR) 

#---------------------------------------------------------------------------------------#

.PHONY: all libs debug bonus re clean fclean norme
 