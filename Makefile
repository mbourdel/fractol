# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/19 14:05:23 by mbourdel          #+#    #+#              #
#    Updated: 2015/12/03 18:07:43 by mbourdel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

SRC = fractol.c \
	  arg_error.c \
	  arg_select.c \
	  fract_init.c \
	  fractal.c \
	  mandelbrot.c \
	  julia.c \
	  explore.c \
	  fougere.c \
	  pixel_put_img.c \
	  mouse.c \
	  zoom.c

OBJ = $(SRC:.c=.o)

LIBFT_PATH = ./libft/

MLX = maclibx/libmlx.a -framework OpenGL -framework AppKit

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@cd $(LIBFT_PATH); $(MAKE) -f Makefile
	@cd ./maclibx/; $(MAKE) -f Makefile
	@gcc $(FLAG) $(SRC) -o $(NAME) $(LIBFT_PATH)libft.a $(MLX)
	@echo "[================]"
	@echo "|     succes !   |"
	@echo "|     fractol    |"
	@echo "|  was summoned  |"
	@echo "[================]"

clean:
	@rm -rf $(OBJ)
	@echo "[================]"
	@echo "|     succes !   |"
	@echo "|     XXXXX.o    |"
	@echo "|  was destroyed |"
	@echo "[================]"

fclean: clean
	@rm -rf $(NAME)
	@echo "[================]"
	@echo "|     succes !   |"
	@echo "|     fractol    |"
	@echo "|  was destroyed |"
	@echo "[================]"

re: fclean all

deslib:
	@cd $(LIBFT_PATH); $(MAKE) fclean -f Makefile
	@cd ./maclibx/; $(MAKE) clean -f Makefile

total: deslib re

