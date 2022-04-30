.PHONY: all clean bonus fclean re
CC		=	c++
FLAG	=	-std=c++98 -Wall -Wextra -Werror
NAME = megaphone
SRC = megaphone.cpp
OPTIONOBJ = -o
DEL = rm -rf

all: $(NAME)

$(NAME): $(HEADER) $(SRC)
	@$(CC) $(FLAG) $(SRC) $(OPTIONOBJ) $(NAME)
	@tput setaf 2 && printf "$(NAME) created.\n"
	@tput setaf 255

%.o: %.c $(HEADER)
	$(CC) $(FLAG) $< $(OPTIONOBJ) $@

clean:
	@$(DEL) $(NAME)
	@tput setaf 928 && printf ".o deleted.\n"
	@tput setaf 255
	

fclean: clean
	@$(DEL) $(NAME)
	@tput setaf 928 && printf ""$(NAME)" deleted.\n"
	@tput setaf 255

re: fclean all
