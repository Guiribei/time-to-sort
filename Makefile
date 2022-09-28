NAME = push_swap
PATH_SRC = ./sources/
PATH_SRCS = ./sources/utils/
PATH_OBJ = ./objects/
PATH_BO = ./bonus/
BONUS = checker


SRC = ajust.c error.c calculate.c execute.c ft_atoi.c \
ft_lstadd_back.c ft_lstlast.c ft_lstpenult.c ft_lstnew.c ft_lstsize.c \
ft_lstclear.c ft_isdigit.c ft_numabs.c ft_numcmp.c ft_putstr_fd.c \
ft_putchar_fd.c main.c push.c rev_rotate.c rotate.c smallsort.c sort.c swap.c \


SRC_BO = main.c get_next_line_utils.c ft_strcmp.c get_next_line.c \
ft_lstnew_bo.c ft_atoi.c ft_lstadd_back_bo.c ft_lstlast_bo.c ft_split.c \
ft_substr.c ft_strtrim.c error.c ft_isdigit.c ft_numcmp.c rev_rotate_bo.c \
push_bo.c rotate_bo.c swap_bo.c ft_lstpenult_bo.c ft_lstclear_bo.c checker.c \
ft_putstr_fd.c ft_putchar_fd.c

OBJ = ${SRC:%.c=$(PATH_OBJ)%.o}
B_OBJ = ${SRC_BO:%.c=$(PATH_BO)%.o}

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

bonus:		$(BONUS)

$(BONUS):	$(B_OBJ)
	cc $(FLAGS) -g $(B_OBJ) -o $(BONUS)

$(PATH_BO)%.o: $(PATH_BO)%.c
	cc $(FLAGS) -g $(INCLUDE) -c $< -o $@

clean:
	@rm -rf $(PATH_OBJ)
	@rm -rf $(B_OBJ)
	@echo "\33[1;93m[SUCCESS] Objects removal done!\33[0m"

fclean: clean
	@rm -f $(NAME)
	@rm -f $(BONUS)
	@echo "\033[1;93m[SUCCESS] Removal done!\33[0m"

re: fclean all

.PHONY: all clean fclean re