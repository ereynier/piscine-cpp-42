SRCS = convert.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = convert

FLAGS = -Wall -Werror -Wextra

%.o: %.cpp
			clang++ $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJS)
			clang++ -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean