# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 15:34:43 by mtran-nh          #+#    #+#              #
#    Updated: 2025/07/14 21:53:39 by mtran-nh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRC:.c=.o)

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c

BONUS_OBJ = $(BONUS_SRC:.c=.o)

NAME = libft.a

RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library compiled: $(NAME)"

bonus: $(OBJS) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJ)

clean:
	$(RM) $(OBJS) $(BONUS_OBJ)
	@echo "Object files removed"

fclean: clean
	$(RM) $(NAME)
	@echo "library removed"

re: fclean $(NAME)

.PHONY: all clean fclean re bonus
