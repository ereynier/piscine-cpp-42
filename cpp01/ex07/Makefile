SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = replace

FLAGS = -Wall -Werror -Wextra

%.o: %.cpp
			clang++ $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJS)
			clang++ -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME) *.replace

re:			fclean all

.PHONY:		all clean fclean