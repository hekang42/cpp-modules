# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 14:41:25 by hekang            #+#    #+#              #
#    Updated: 2021/09/14 09:37:47 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= replace

GCCFLAG = -Wall -Werror -Wextra

RM		= rm -f

SRCS	= main.cpp

all		: $(NAME)

$(NAME) : $(SRCS)
		clang++ $(GCCFLAG) -o $@ $(SRCS)

clean	:
		$(RM) $(NAME)

re		: clean all

.PHONY: all clean re