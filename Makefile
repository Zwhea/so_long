# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 21:05:34 by mmosca            #+#    #+#              #
#    Updated: 2023/02/16 21:39:45 by mmosca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## -- Includes

include config/headers.mk
include config/sources.mk

## -- Variables

## - Properties

OS			:=	$(shell uname)
NAME		:=	so_long
DEBUG		:=	no

## - Directories

SRC_DIR		:=	src
INC_DIR		:=	inc
LIB_DIR		:=	lib
OBJ_DIR		:=	.object
LIBFT_DIR	:=	$(LIB_DIR)/libft

ifeq ($(OS), Darwin)
MLX_DIR 	:=	$(LIB_DIR)/mlx_mac
else ifeq ($(OS), Linux)
MLX_DIR 	:=	$(LIB_DIR)/mlx_linux
endif

## - Compilation Flags

CFLAGS		:=	-Wall -Wextra -Werror -O2 -pipe -I $(INC_DIR) -I $(LIBFT_DIR) -I $(MLX_DIR)
DFLAGS		:=	-g3 -fsanitize=address
MLX_FLAGS	:=	-L $(MLX_DIR)

ifeq ($(DEBUG), yes)
CFLAGS 		+=	$(DFLAGS)
endif

ifeq ($(OS), Darwin)
MLX_FLAGS 	+=	-l mlx -framework OpenGL -framework AppKit
else ifeq ($(OS), Linux)
MLX_FLAGS 	+=	-l Xext -l X11 -l m
endif

## - Librairies

LIBFT		:=	$(LIBFT_DIR)/libft.a

## - Compilation

OBJECTS		:=	$(addprefix $(OBJ_DIR)/, $(SOURCES:.c=.o))

## -- Rules

.DEFAULT_GOAL := all

## - Compilations

.PHONY: all
all: ## Run the compilation of all necessaries files for the program
	$(MAKE) libs
	$(MAKE) $(NAME)

$(OBJ_DIR)/%.o: %.c $(HEADERS) $(LIBFT) $(MLX)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(MLX_FLAGS) $(LIBFT) $^ -o $@

.PHONY: libs
libs: ## Compile alls necessary librairies
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(MLX_DIR)

.PHONY: debug
debug: ## Run the compilation of the project with debug flags
	$(MAKE) re DEBUG=yes

.PHONY: re
re: ## Re-run the compilation of all project
	$(MAKE) fclean
	$(MAKE) all

## - Cleaning

.PHONY: clean
clean: ## Clean objects files
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(MLX_DIR) clean
	$(RM) $(OBJECTS)

.PHONY: fclean
fclean: ## Clean objects, librairies & executable files
	$(MAKE) clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

## - Utilities

.PHONY: norm
norm: ## Run the norminette script
	norminette $(INC_DIR) $(LIBFT_DIR) $(SRC_DIR)
