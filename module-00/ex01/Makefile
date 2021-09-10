# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 14:41:25 by hekang            #+#    #+#              #
#    Updated: 2021/09/10 14:51:25 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook

GCCFLAG = -Wall -Werror -Wextra

RM		= rm -f

SRCS	= phonebook.cpp contact.cpp

INCS	= -I contact.hpp

all		: $(NAME)

$(NAME) :
		clang++ $(GCCFLAG) $(INCS) $(SRCS) -o $@ 

clean	:
		$(RM) $(NAME)

re		: clean all

.PHONY: all clean re