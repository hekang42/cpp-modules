# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 16:17:37 by hekang            #+#    #+#              #
#    Updated: 2021/09/24 16:17:39 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Array

GCCFLAG = -Wall -Werror -Wextra

RM		= rm -f

SRCS	= main.cpp

all		: $(NAME)

$(NAME) : $(SRCS)
		clang++ $(GCCFLAG) $(SRCS) -o $@

clean	:
		$(RM) $(NAME)

re		: clean all

.PHONY: all clean re