# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/27 12:49:04 by efinicke          #+#    #+#              #
#    Updated: 2021/10/07 10:56:26 by efinicke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memcmp.c \
	ft_memmove.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_strnstr.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strdup.c \
	ft_strtrim.c \
	ft_strmapi.c \
	ft_itoa.c \
	ft_calloc.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_putchar_fd.c \
	ft_bzero.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strncmp.c \
	ft_atoi.c \
	ft_str_add_char.c \
	ft_strjoin.c \
	ft_strrchr.c \
	ft_strchr.c \
	ft_substr.c \
	ft_split.c

OBJS = $(SRCS:.c=.o)

BONSRCS = ft_lstsize.c \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c 

BONOBJS = $(BONSRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $@ $^
	ranlib $@

.c.o:
	$(CC) -c $(CFLAGS) $<

bonus: $(BONOBJS) $(OBJS)
	ar -rc $(NAME) $^
	ranlib $(NAME)

clean:
	$(RM) $(OBJS) $(BONOBJS)

fclean:
	$(RM) $(OBJS) $(NAME) $(BONOBJS)

re: fclean all

.PHONY:	all clean fclean re
