# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 15:29:20 by ymakhlou          #+#    #+#              #
#    Updated: 2023/11/18 22:16:24 by ymakhlou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

SRCS = ft_bzero.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c\
	  ft_strncmp.c ft_strdup.c ft_atoi.c ft_isdigit.c ft_isascii.c\
	  ft_calloc.c ft_strnstr.c ft_memcmp.c ft_strrchr.c ft_tolower.c\
	  ft_toupper.c ft_memmove.c ft_memset.c ft_isprint.c ft_isalnum.c\
	  ft_isalpha.c ft_memcpy.c ft_memchr.c ft_substr.c ft_itoa.c\
	  ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
	  ft_putnbr_fd.c ft_strjoin.c ft_strtrim.c ft_split.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
		ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o) 

BONUS_OBJS = $(BONUS:.c=.o) 

CFLAGS = -Wall -Wextra -Werror 

CC = cc

HEADER = libft.h 

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	
bonus: $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS)

clean:
	rm -rf $(OBJS) $(BONUS_OBJS) 

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY =  clean
