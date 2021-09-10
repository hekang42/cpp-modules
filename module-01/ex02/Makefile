# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 14:41:25 by hekang            #+#    #+#              #
#    Updated: 2021/09/10 22:31:20 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= HI_THIS_IS_BRAIN!

GCCFLAG = -Wall -Werror -Wextra

RM		= rm -f

SRCS	= main.cpp

# INCS	= .

all		: $(NAME)

$(NAME) :
		clang++ $(GCCFLAG) $(SRCS) -o $@ 

clean	:
		$(RM) $(NAME)

re		: clean all

.PHONY: all clean re