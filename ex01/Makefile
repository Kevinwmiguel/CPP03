NAME	 =	Serena,mylove!

SRCS     =	ClapTrap.cpp main.cpp

OBJS     =   $(SRCS:.cpp=.o)

CXX		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

all : $(NAME)


$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	echo "compiling \nDone"
clean:
	rm -f $(OBJS);

fclean: clean
	rm -f $(NAME);

re: fclean all