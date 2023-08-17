# Library Name #
NAME		= megaphone

# CPP Variables #
SRCS 		= megaphone.cpp

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

$(NAME):	$(SRCS)
			@$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
			@printf "$(_SUCCESS) is ready.\n"

clean:
			@$(RM) $(OBJS)
			@printf "$(_INFO) cleaning done.\n"

fclean:		clean
			@$(RM) $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re
