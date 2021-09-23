# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 19:29:32 by hekang            #+#    #+#              #
#    Updated: 2021/09/23 19:39:46 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Iter

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