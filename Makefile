NAME = push_swap
PATH_SRC = ./sources/
PATH_SRCS = ./sources/utils/
PATH_OBJ = ./objects/

SRC = main.c error.c init.c ft_atoi.c ft_isdigit.c \
ft_lstadd_back.c ft_lstnew.c ft_numcmp.c ft_lstlast.c ft_lstpenult.c \
ft_putstr_fd.c ft_putchar_fd.c push.c swap.c rotate.c rev_rotate.c \
ft_lstsize.c


OBJ = ${SRC:%.c=$(PATH_OBJ)%.o}

INCLUDE = -I ./include/
FLAGS = -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJ)
	cc $(FLAGS) $(OBJ) -o $(NAME)

$(PATH_OBJ)%.o: $(PATH_SRC)%.c
	mkdir -p $(PATH_OBJ)
	cc $(FLAGS) $(INCLUDE) -c $< -o $@
	@echo "\033[1;92m[SUCCESS] $@ Objects creation done!\033[0m"

$(PATH_OBJ)%.o: $(PATH_SRCS)%.c
	cc $(FLAGS) $(INCLUDE) -c $< -o $@

clean:
	@rm -rf $(PATH_OBJ)
	@echo "\33[1;93m[SUCCESS] Objects removal done!\33[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[1;93m[SUCCESS] Library removal done!\33[0m"

re: fclean all

.PHONY: all clean fclean re