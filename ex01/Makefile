# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 18:36:49 by gde-jesu          #+#    #+#              #
#    Updated: 2023/09/01 18:36:49 by gde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name #
NAME		= phonebook

# CPP Variables #
SRCS 		= *.cpp
HDRS		= *.hpp

# Compiling Variables #
CPP 		= c++
OBJS 		= $(SRCS:.cpp=.o)
CFLAGS		= -Wall -Wextra -Werror -std=c++98
RM 			= rm -f

# Colors #
GREEN	=	\e[32m
YELLOW	=	\e[33m
RESET	=	\e[0m
_SUCCESS	=	✅ $(GREEN)Successfully compiled$(RESET)
_INFO		=	ℹ️  $(YELLOW)Info$(RESET)

# Functions #
all:		$(NAME)

$(NAME):	$(SRCS) $(HDRS)
			@$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
			@printf "$(_SUCCESS) is ready.\n"

clean:
			@$(RM) $(OBJS)
			@printf "$(_INFO) cleaning done.\n"

fclean:		clean
			@$(RM) $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re
