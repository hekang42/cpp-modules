# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 14:41:25 by hekang            #+#    #+#              #
#    Updated: 2021/09/14 09:36:35 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Unnecessary_violence

GCCFLAG = -Wall -Werror -Wextra

RM		= rm -f

SRCS	= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

INCS	= -I HumanA.hpp HumanB.hpp Weapon.hpp

all		: $(NAME)

$(NAME) : $(SRCS)
		clang++ $(GCCFLAG) -o $@ $(SRCS)

clean	:
		$(RM) $(NAME)

re		: clean all

.PHONY: all clean re