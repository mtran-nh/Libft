# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 15:34:43 by mtran-nh          #+#    #+#              #
#    Updated: 2025/07/12 21:31:43 by mtran-nh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)

NAME = libft.a

RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library compiled: $(NAME)"

clean:
	$(RM) $(OBJS)
	@echo "Object files removed"

fclean: clean
	$(RM) $(NAME)
	@echo "library removed"

re: fclean $(NAME)

.PHONY: all clean fclean re
