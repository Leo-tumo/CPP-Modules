.PHONY: all clean fclean re me
NAME 	=	dyn_cast
CC		=	c++
FLAG	=	-std=c++98 -Wall -Wextra -Werror
SRC_DIR =	src
INC_DIR =	include
OBJ_DIR =	compiled
SRCS 	=	$(wildcard $(SRC_DIR)/*.cpp)
HEADER	=	$(wildcard $(INC_DIR)/*.hpp)
SRC 	= 	$(SRCS:$(SRC_DIR)/%=%)
OBJS 	= 	$(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
OPT		=	-o
DEL		=	rm -rf
MKDIR 	= 	mkdir -p

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INC_DIR)
	@$(MKDIR) $(dir $@)
	@$(CC) $(FLAG) -I $(INC_DIR) -o $@ -c $<

$(NAME): $(OBJS) $(HEADER) $(SRCS) 
	@$(CC) $(FLAG) $(SRCS) -I $(INC_DIR) $(OPT) $@
	@tput setaf 2 && printf "$@ created.\n"
	@tput setaf 255

clean:
	@$(DEL) $(OBJ_DIR) 
	@tput setaf 928 && printf ".o deleted.\n"
	@tput setaf 255


$(OBJ_DIR) :
	@$(MKDIR) $(OBJ_DIR)	

fclean: clean
	@$(DEL) $(NAME)
	@tput setaf 928 && printf ""$(NAME)" deleted.\n"
	@tput setaf 255

re: fclean all

me:	all
	@./$(NAME)
