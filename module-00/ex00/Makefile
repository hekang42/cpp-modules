# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 14:41:25 by hekang            #+#    #+#              #
#    Updated: 2021/09/10 14:52:31 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

GCCFLAG = -Wall -Werror -Wextra

RM		= rm -f

SRCS	= megaphone.cpp

all		: $(NAME)

$(NAME) :
		clang++ $(GCCFLAG) $(SRCS) -o $@ 

clean	:
		$(RM) $(NAME)

re		: clean all

.PHONY: all clean re