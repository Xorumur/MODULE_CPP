NAME =		Adress_Book

CXXFLAGS =	-Wall -Wextra -Werror

CXX =		clang++

SRCS =		main.cpp\
			Contact.cpp\
			Phonebook.cpp\

OBJS =		$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:		
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		re clean fclean all
