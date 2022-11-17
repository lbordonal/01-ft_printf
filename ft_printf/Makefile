# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbordona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 11:42:19 by lbordona          #+#    #+#              #
#    Updated: 2022/11/17 14:50:43 by lbordona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables:

NAME = libftprintf.a
LIBFT = libft
CC = cc
INCLUDE = include
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

#Sources:

SRC = ft_printf.c ft_printf_utils.c \
	ft_args_csp.c ft_args_diu.c ft_args_xXpercent.c
#BONUS = *.c

OBJ = $(SRC:%.c=%.o)
#BONUS_OBJ = $(BONUS:%.c=%.o)

#Rules:

all: $(NAME)

$(NAME): $(OBJ)
		@make -C $(LIBFT)
		@cp libft/libft.a
		@mv libft.a $(NAME)
		@$(AR) $(NAME) $(OBJ)
		@echo "FT_PRINTF - DONE"

clean:
		@$(RM) $(NAME)
		@make clean -C $(LIBFT)
		@echo "CLEAN - DONE"

fclean: clean
		@$(RM) $(NAME)
		@$(RM) $(LIBFT)/libft.a
		@echo "FCLEAN - DONE"

re: fclean all
		@echo "RE - DONE"
