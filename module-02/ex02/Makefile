# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 14:41:25 by hekang            #+#    #+#              #
#    Updated: 2021/09/16 10:40:39 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Now_we_are_talking

GCCFLAG = -Wall -Werror -Wextra

RM		= rm -f

SRCS	= main.cpp Fixed.cpp

all		: $(NAME)

$(NAME) : $(SRCS)
		clang++ $(GCCFLAG) $(SRCS) -o $@

clean	:
		$(RM) $(NAME)

re		: clean all

.PHONY: all clean re