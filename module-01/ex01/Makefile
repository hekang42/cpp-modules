# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 14:41:25 by hekang            #+#    #+#              #
#    Updated: 2021/09/10 22:11:18 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Moar_brainz!

GCCFLAG = -Wall -Werror -Wextra

RM		= rm -f

SRCS	= main.cpp ZombieHorde.cpp Zombie.cpp

INCS	= -I Zombie.hpp

all		: $(NAME)

$(NAME) :
		clang++ $(GCCFLAG) $(INCS) $(SRCS) -o $@ 

clean	:
		$(RM) $(NAME)

re		: clean all

.PHONY: all clean re