# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 12:10:46 by hekang            #+#    #+#              #
#    Updated: 2021/09/23 10:09:23 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Bureaucrat

GCCFLAG = -Wall -Werror -Wextra

RM		= rm -f

SRCS	= main.cpp bureaucrat.cpp

all		: $(NAME)

$(NAME) : $(SRCS)
		clang++ $(GCCFLAG) $(SRCS) -o $@

clean	:
		$(RM) $(NAME)

re		: clean all

.PHONY: all clean re