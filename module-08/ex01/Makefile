# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 16:17:37 by hekang            #+#    #+#              #
#    Updated: 2021/09/24 18:16:51 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ex01

GCCFLAG = -Wall -Werror -Wextra

RM		= rm -f

SRCS	= main.cpp span.cpp

all		: $(NAME)

$(NAME) : $(SRCS)
		clang++ $(GCCFLAG) $(SRCS) -o $@

clean	:
		$(RM) $(NAME)

re		: clean all

.PHONY: all clean re