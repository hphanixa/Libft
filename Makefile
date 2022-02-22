# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hphanixa <hphanixa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 14:40:21 by hphanixa          #+#    #+#              #
#    Updated: 2022/02/22 14:34:54 by hphanixa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_isalnum.c \
			  ft_isalpha.c \
			  ft_isascii.c \
			  ft_isdigit.c \
			  ft_isinteger.c \
			  ft_isprint.c \
			  ft_isnumber.c \
			  ft_isspace.c \
			  ft_tolower.c \
			  ft_toupper.c \
			  ft_bzero.c \
			  ft_calloc.c \
			  ft_memccpy.c \
			  ft_memchr.c \
			  ft_memcmp.c \
			  ft_memcpy.c \
			  ft_memmove.c \
			  ft_memset.c \
			  ft_strdup.c \
			  ft_atoi.c \
			  ft_itoa.c \
			  ft_split.c \
			  ft_strchr.c \
			  ft_substr.c \
			  ft_strjoin.c \
			  ft_strlcat.c \
			  ft_strlcpy.c \
			  ft_strlen.c \
			  ft_strmapi.c \
			  ft_strncmp.c \
			  ft_strnstr.c \
			  ft_strrchr.c \
			  ft_strtrim.c \
			  ft_putstr.c \
			  ft_putchar.c \
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putendl_fd.c \
			  ft_putnbr_fd.c \
			  ft_lstadd_front.c \
			  ft_lstadd_back.c \
			  ft_lstsize.c \
			  ft_lstlast.c \
			  ft_lstnew.c \
			  ft_lstdelone.c \
			  ft_lstclear.c \
			  ft_lstiter.c \
			  ft_lstmap.c \

OBJS		= $(patsubst %.c, $(PATH_OBJS)/%.o, $(SRCS))

PATH_OBJS	+= objs

CC			= clang
CFLAGS		= -Wall -Wextra -Werror

ifeq ($(debug), 1)
	CFLAGS += -g3 -fsanitize=address,undefined
endif

NAME		= libft.a
AR			= ar rcs

INCLUDES 	+= .
HEADERS	 	+= $(INCLUDES)/libft.h


all			: $(NAME)

$(NAME)		: $(PATH_OBJS) $(OBJS) $(INCS)
			$(AR) $(NAME) $(OBJS)

$(PATH_OBJS):
	mkdir -p $@

$(OBJS): $(PATH_OBJS)/%.o: %.c $(HEADERS)
			$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)

clean:
			$(RM) $(OBJS)

fclean		: clean
			$(RM) -R $(PATH_OBJS)
