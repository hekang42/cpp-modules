# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <hekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 12:10:46 by hekang            #+#    #+#              #
#    Updated: 2021/09/23 13:58:05 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Form

GCCFLAG = -Wall -Werror -Wextra

RM		= rm -f

SRCS	= main.cpp bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

all		: $(NAME)

$(NAME) : $(SRCS)
		clang++ $(GCCFLAG) $(SRCS) -o $@

clean	:
		$(RM) $(NAME)

re		: clean all

.PHONY: all clean re