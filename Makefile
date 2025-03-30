NAME = push_swap
NAME_B = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror

BLUE = "\033[0;34m"
PURPLE = "\033[1;35m"
YELLOW = "\033[0;33m"
LIGHT_YELLOW = "\033[1;33m"
NOCOLOR = "\033[0;37m"

SRCS = mandatory/push_swap.c						\
	   mandatory/parsing.c							\
	   mandatory/lstnum.c							\
	   mandatory/help.c								\
	   mandatory/help2.c							\
	   mandatory/moves.c							\
	   mandatory/libft_funct/ft_lstadd_back.c		\
	   mandatory/libft_funct/ft_lstadd_front.c		\
	   mandatory/libft_funct/ft_lstclear.c			\
	   mandatory/libft_funct/ft_lstlast.c			\
	   mandatory/libft_funct/ft_lstnew.c			\
	   mandatory/libft_funct/ft_split.c				\
	   mandatory/libft_funct/ft_atoi.c				\
	   mandatory/libft_funct/ft_lstsize.c			\
	   mandatory/sorting/sort_two.c					\
	   mandatory/sorting/sort_three.c				\
	   mandatory/sorting/sort_four.c				\
	   mandatory/sorting/sort_five.c				\
	   mandatory/sorting/sort_large.c				\


SRCS_B = 	bonus/checker_bonus.c										\
			bonus/ft_lstnum_bonus.c										\
			bonus/help_bonus.c											\
			bonus/moves_bonus.c											\
			bonus/parsing_bonus.c										\
			bonus/get_next_line_bonus/get_next_line_bonus.c				\
			bonus/get_next_line_bonus/get_next_line_utils_bonus.c		\
			bonus/libft_funct_bonus/ft_atoi_bonus.c						\
			bonus/libft_funct_bonus/ft_lstadd_back_bonus.c				\
			bonus/libft_funct_bonus/ft_lstadd_front_bonus.c				\
			bonus/libft_funct_bonus/ft_lstclear_bonus.c					\
			bonus/libft_funct_bonus/ft_lstlast_bonus.c					\
			bonus/libft_funct_bonus/ft_lstnew_bonus.c					\
			bonus/libft_funct_bonus/ft_split_bonus.c					\
			bonus/libft_funct_bonus/ft_strncmp_bonus.c					\

OBJS = $(SRCS:.c=.o)
OBJSB = $(SRCS_B:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) mandatory/header.h
	@echo $(BLUE)"Compiling push_swap..."$(NOCOLOR)
	@echo $(BLUE)""$(NOCOLOR)
	@echo $(PURPLE)"██████╗ ██╗   ██╗███████╗██╗  ██╗        ███████╗██╗    ██╗ █████╗ ██████╗ "$(NOCOLOR)
	@echo $(PURPLE)"██╔══██╗██║   ██║██╔════╝██║  ██║        ██╔════╝██║    ██║██╔══██╗██╔══██╗"$(NOCOLOR)
	@echo $(PURPLE)"██████╔╝██║   ██║███████╗███████║        ███████╗██║ █╗ ██║███████║██████╔╝"$(NOCOLOR)
	@echo $(PURPLE)"██╔═══╝ ██║   ██║╚════██║██╔══██║        ╚════██║██║███╗██║██╔══██║██╔═══╝ "$(NOCOLOR)
	@echo $(PURPLE)"██║     ╚██████╔╝███████║██║  ██║███████╗███████║╚███╔███╔╝██║  ██║██║     "$(NOCOLOR)
	@echo $(PURPLE)"╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝     "$(NOCOLOR)
	@echo $(BLUE)"                                      	           By: hhammiou42 [ESBG 💜]"$(NOCOLOR)
	@echo $(BLUE)""$(NOCOLOR)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo $(BLUE)"Compilation finished !!"$(NOCOLOR)
	@echo $(YELLOW)"type "$(LIGHT_YELLOW)"\`./push_swap \"numbers\" \`"$(YELLOW)" to start! "$(NOCOLOR)


bonus: $(NAME_B)

$(NAME_B): $(OBJSB) bonus/header_bonus.h
	@echo $(BLUE)"Compiling checker..."$(NOCOLOR)
	@echo $(BLUE)""$(NOCOLOR)
	@echo $(PURPLE)" ██████╗██╗  ██╗███████╗ ██████╗██╗  ██╗███████╗██████╗ "$(NOCOLOR)
	@echo $(PURPLE)"██╔════╝██║  ██║██╔════╝██╔════╝██║ ██╔╝██╔════╝██╔══██╗"$(NOCOLOR)
	@echo $(PURPLE)"██║     ███████║█████╗  ██║     █████╔╝ █████╗  ██████╔╝"$(NOCOLOR)
	@echo $(PURPLE)"██║     ██╔══██║██╔══╝  ██║     ██╔═██╗ ██╔══╝  ██╔══██╗"$(NOCOLOR)
	@echo $(PURPLE)"╚██████╗██║  ██║███████╗╚██████╗██║  ██╗███████╗██║  ██║"$(NOCOLOR)
	@echo $(PURPLE)" ╚═════╝╚═╝  ╚═╝╚══════╝ ╚═════╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝"$(NOCOLOR)
	@echo $(BLUE)"                                By: hhammiou42 [ESBG 💜]"$(NOCOLOR)
	@echo $(BLUE)""$(NOCOLOR)
	@$(CC) $(CFLAGS) $(OBJSB) -o $(NAME_B)
	@echo $(BLUE)"Compilation finished !!"$(NOCOLOR)
	@echo $(YELLOW)"type "$(LIGHT_YELLOW)"\`./checker \"numbers\" \`"$(YELLOW)" to start! "$(NOCOLOR)

%.o: %.c 
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS) $(OBJSB)
	@echo $(BLUE)"Object files removed"$(NOCOLOR)

fclean: clean
	@rm -f $(NAME) $(NAME_B)
	@echo $(YELLOW)"Files Executables Removed"$(NOCOLOR)

re: fclean all

.PHONY: clean