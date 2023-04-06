# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otangkab <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 17:19:05 by otangkab          #+#    #+#              #
#    Updated: 2023/03/08 16:50:48 by otangkab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PART1	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_strlen.c  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
	  ft_strlcpy.c ft_strlcat.c \
	  ft_memset.c ft_bzero.c ft_memcpy.c \
	  ft_memmove.c ft_memchr.c ft_memcmp.c \
	  ft_calloc.c ft_strdup.c \
	  ft_toupper.c ft_tolower.c \
	  ft_atoi.c

PART2	= ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_strmapi.c ft_striteri.c ft_split.c

BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	  ft_lstmap.c

SRCS	= $(PART1) $(PART2)
B_SRCS	= $(BONUS)
OBJS	= $(SRCS:.c=.o)
B_OBJS	= $(B_SRCS:.c=.o)

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror -c
NAME	= libft.a

all: $(NAME) 

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJS) $(B_OBJS)
	@ar -rcs $(NAME) $(OBJS) $(B_OBJS)

$(B_OBJS): $(B_SRCS)
	@$(CC) $(CFLAGS) $(B_SRCS)

.PHONY: all clean fclean re bonus
