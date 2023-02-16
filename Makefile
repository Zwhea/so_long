# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 16:15:35 by wangthea          #+#    #+#              #
#    Updated: 2023/02/16 17:28:34 by wangthea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =				so_long

HEADERS =			includes/enums.h		\
					includes/prototypes.h	\
					includes/so_long.h		\
					includes/structures.h	\

SOURCES =			sources/parsing/backtrack_map.c	\
					sources/parsing/check_map.c		\
					sources/parsing/errors.c		\
					sources/parsing/get_map.c		\
					sources/parsing/utils_check.c	\
					sources/utils/utils.c			\
					sources/so_long.c				\
					
UNAME := 			$(shell uname)

LIBFT =				librairies/libft/libft.a
					
OBJECTS =			$(SOURCES:.c=.o)

DFLAGS	=			-g3 -fsanitize=address
CFLAGS	= 			-Wall -Wextra -Werror -I librairies/libft -I includes $(DFLAGS)

ifeq ($(UNAME), Linux)
MLX_FLAGS =	-L	librairies/mlx_linux -l Xext -l X11 -l m
MLX =		librairies/mlx_linux/libmlx.a
CFLAGS	= 	-Wall -Wextra -Werror -I librairies/mlx_linux -I librairies/libft -I includes $(DFLAGS)
endif

ifeq ($(UNAME), Darwin)
MLX_FLAGS =	-L librairies/mlx_mac -l mlx -framework OpenGL -framework AppKit
MLX =		librairies/mlx_mac/libmlx.a
CFLAGS	= 	-Wall -Wextra -Werror -I librairies/mlx_mac -I librairies/libft -I includes $(DFLAGS)
endif

ifeq ($(UNAME), Linux)
all: mlx_linux
endif

ifeq ($(UNAME), Darwin)
all: mlx_mac
endif

all :	lib
	$(MAKE) $(NAME)

%.o : %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS) $(LIBFT) $(MLX)
	$(CC) $(CFLAGS) $(MLX_FLAGS) $^ -o $@

lib :
	$(MAKE) -C ./librairies/libft

mlx_linux :
	$(MAKE) -C ./librairies/mlx_linux

mlx_mac :
	$(MAKE) -C ./librairies/mlx_mac
	
norme :
	norminette includes librairies/libft sources

ifeq ($(UNAME), Linux)
clean :
	$(MAKE) -C librairies/libft clean
	$(MAKE) -C librairies/mlx_linux clean
	$(RM) $(OBJECTS)
endif

ifeq ($(UNAME), Darwin)
clean :
	$(MAKE) -C librairies/libft clean
	$(MAKE) -C librairies/mlx_mac clean
	$(RM) $(OBJECTS)
endif

ifeq ($(UNAME), Linux)
fclean : clean
	$(MAKE) -C librairies/libft fclean
	$(MAKE) -C librairies/mlx_linux clean
	$(RM) $(NAME)
endif

ifeq ($(UNAME), Darwin)
fclean : clean
	$(MAKE) -C librairies/libft fclean
	$(MAKE) -C librairies/mlx_mac clean
	$(RM) $(NAME)
endif

re : fclean
	$(MAKE) all

.PHONY: all lib mlx_linux mlx_mac norme clean fclean re
 