# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/19 11:54:47 by mbourdel          #+#    #+#              #
#    Updated: 2015/11/19 12:03:11 by mbourdel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

SRC = 

OBJ = $(SRC:.c=.o)

LBFT_PATH = ./libft/

MLX = maclibx/libmlx.a -framework OpenGL -framework AppKit

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@cd $(LIBFT_PATH); $(MAKE) -f Makefile
	@cd ./maclibx/; $(MAKE) -f Makefile
	@gcc $(FLAG) $(SRC) -o $(NAME) $(LIBFT_PATH)libft.a $(MLX)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

deslib:
	@cd $(LIBFT_PATH); $(MAKE) fclean -f Makefile

total: deslib re

