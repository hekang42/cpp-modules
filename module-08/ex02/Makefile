# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 16:17:37 by hekang            #+#    #+#              #
#    Updated: 2021/09/25 09:53:50 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= mutantstack

GCCFLAG = -Wall -Werror -Wextra

RM		= rm -f

SRCS	= main.cpp mutantstack.cpp

all		: $(NAME)

$(NAME) : $(SRCS)
		clang++ $(GCCFLAG) $(SRCS) -o $@

clean	:
		$(RM) $(NAME)

re		: clean all

.PHONY: all clean re