# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/17 18:46:57 by otangkab          #+#    #+#              #
#    Updated: 2023/03/16 20:06:45 by otangkab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COL_GREEN	:=	\033[0;32m
COL_RED		:=	\033[0;31m
COL_BLUE	:=	\033[0;34m
COL_END		:=	\033[0m

NAME		:=	push_swap

CC		:=	gcc
CFLAG		:=	-Wall -Wextra -Werror -g
SRCS		:=	push_swap.c push_utils.c instruct.c instruct2.c \
	instruct3.c stack.c stack2.c check.c error.c sort.c sort2.c \
	sort3.c sort4.c sort5.c sort_100.c
OBJS		:=	$(SRCS:.c=.o)
LIBFT_DIR	:=	./Libft
LIBFT		:=	$(LIBFT_DIR)libft.a

all:	$(NAME)

$(NAME):	$(OBJS) $(LIBFT)
	@$(CC) $(CFLAG) $(OBJS) -I$(LIBFT_DIR) -L$(LIBFT_DIR) -lft -g -o $(NAME)
	@echo "$(COL_GREEN)create $(NAME) ready to run.$(COL_END)\n"

$(OBJS):	$(SRCS)
	@$(CC) $(CFLAG) -c $(SRCS)
	@echo "$(COL_BLUE)create object files.$(COL_END)"

$(LIBFT):
	@$(MAKE) bonus -C $(LIBFT_DIR)
	@echo "$(COL_BLUE)create $(LIBFT) files. $(COL_END)"

clean:
	@$(MAKE) bonus -C $(LIBFT_DIR) fclean
	@rm -rf *.o *.dSYM
	@echo "$(COL_RED)remove in $(LIBFT) files.$(COL_RED)"

fclean:	clean
	@rm -rf $(NAME)
	@echo "$(COL_RED)remove all .o and $(NAME) files. $(COL_END)\n"

re:	fclean all

.PHONY:	all clean fclean re
