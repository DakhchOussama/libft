# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odakhch <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 11:10:12 by odakhch           #+#    #+#              #
#    Updated: 2021/11/24 13:20:50 by odakhch          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
DEPS = libft.h

SRC = ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_toupper.c\
ft_tolower.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_itoa.c\
ft_strmapi.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_striteri.c\
ft_split.c\
ft_calloc.c\
ft_strdup.c

SRC_B = ft_lstnew.c\
ft_lstadd_front.c\
ft_lstsize.c\
ft_lstlast.c\
ft_lstdelone.c\
ft_lstclear.c\
ft_lstadd_back.c\
ft_lstiter.c\
ft_lstmap.c


OBJECTS = $(SRC:.c=.o)
OBJECTS_B = $(SRC_B:.c=.o)

all:$(NAME)

$(NAME):$(OBJECTS)
	ar rcs $(NAME) $?
bonus:$(OBJECTS_B)
	ar rcs $(NAME) $?
.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -f $(OBJECTS) $(OBJECTS_B) *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
