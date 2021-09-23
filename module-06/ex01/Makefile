# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 12:10:46 by hekang            #+#    #+#              #
#    Updated: 2021/09/23 18:51:38 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Serialization

GCCFLAG = -Wall -Werror -Wextra

RM		= rm -f

SRCS	= main.cpp Data.cpp

all		: $(NAME)

$(NAME) : $(SRCS)
		clang++ $(GCCFLAG) $(SRCS) -o $@

clean	:
		$(RM) $(NAME)

re		: clean all

.PHONY: all clean re