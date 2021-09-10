# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 14:41:25 by hekang            #+#    #+#              #
#    Updated: 2021/09/10 16:15:26 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Account

GCCFLAG = -Wall -Werror -Wextra

RM		= rm -f

SRCS	= Account.cpp tests.cpp

INCS	= -I Account.hpp

all		: $(NAME)

$(NAME) :
		clang++ $(GCCFLAG) $(INCS) $(SRCS) -o $@ 

clean	:
		$(RM) $(NAME)

re		: clean all

.PHONY: all clean re