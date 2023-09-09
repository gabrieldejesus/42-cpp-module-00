# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 18:29:51 by gde-jesu          #+#    #+#              #
#    Updated: 2023/09/09 19:02:29 by gde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name #
NAME		= megaphone

# CPP Variables #
SRCS 		= megaphone.cpp

# Compiling Variables #
CPP 		= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
RM 			= rm -f

# Colors #
GREEN		= \e[32m
YELLOW		= \e[33m
RESET		= \e[0m
_SUCCESS	= ✨ $(GREEN)Compiled successfully$(RESET)
_INFO		= 🚀 $(YELLOW)Info$(RESET)

# Functions #
all:		$(NAME)

$(NAME):	$(SRCS)
			@$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
			@printf "$(_SUCCESS).\n"

clean:
			@$(RM) $(NAME)	
			@printf "$(_INFO) cleaning done.\n"

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re
