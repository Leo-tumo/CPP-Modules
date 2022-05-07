.PHONY: all clean fclean re me
CC		=	c++
FLAG	=	-std=c++98 -Wall -Wextra -Werror
NAME 	=	Moar
SRCS 	=	main.cpp Zombie.cpp zombieHorde.cpp
HEADER	=	Zombie.hpp
OPT		=	-o
DEL		=	rm -rf
OBJS	=	$(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(HEADER) $(SRCS) $(OBJS)
	@$(CC) $(FLAG) $(SRCS) $(OPT) $(NAME)
	@tput setaf 2 && printf "$(NAME) created.\n"
	@tput setaf 255

%.o: %.cpp
	@$(CC) $(FLAG) -c $< $(OPT) $@

clean:
	@$(DEL) $(OBJS)
	@tput setaf 928 && printf ".o deleted.\n"
	@tput setaf 255
	

fclean: clean
	@$(DEL) $(NAME)
	@tput setaf 928 && printf ""$(NAME)" deleted.\n"
	@tput setaf 255

re: fclean all

me:	all
	@./$(NAME)
