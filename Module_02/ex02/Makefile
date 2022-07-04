NAME =		canon

CXXFLAGS +=	-Wall -Wextra -Werror -std=c++98

CXX =		clang++

#SRCS =		$(wildcard *.cpp)

SRCS  =		fixed_ope.cpp fixed.cpp main.cpp \

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