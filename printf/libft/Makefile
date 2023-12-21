# Name of the library
NAME = libft.a

# Name of the directories
SRC_DIR		= src
INCLUDE_DIR	= include
OBJ_DIR		= obj

# Include files
INC	= -I $(INCLUDE_DIR)

# Source files
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	  ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	  ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	  ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	  ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	  ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
	  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	  ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c

# Bonus source files
SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# Object files
OBJ			= $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))
OBJ_BONUS	= $(addprefix $(OBJ_DIR)/,$(SRC_BONUS:.c=.o))

# Dependency files
DEP	   		= $(addsuffix .d, $(basename $(OBJ)))
DEP_BONUS 	= $(addsuffix .d, $(basename $(OBJ_BONUS)))

# Compiler and flags
COMPILE	= cc -c
CFLAGS	= -Wall -Werror -Wextra -MMD -MP -O3 $(INC)

# Archiver
LIBC = ar -rcs

# Create directories
MKDIR	= mkdir -p

# Cleaner
RM_FILE	= rm -f
RM_DIR	= rm -rf

# Colors for terminal output
GREEN	= \033[32m
BLUE	= \033[34m
YELLOW	= \033[33m
RESET	= \033[0m

# Compilation rule
$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c Makefile
	@$(MKDIR) $(dir $@)
	@$(COMPILE) $(CFLAGS) -o $@ $<
	@echo "$(BLUE)Compiling $<...$(RESET)"

# All rule
all: $(NAME)

# Build rule
$(NAME): $(OBJ)
	@$(LIBC) $(NAME) $(OBJ)
	@echo "$(GREEN)Library $(NAME) created.$(RESET)"

# Bonus rule
bonus:	.bonus
.bonus:	$(OBJ) $(OBJ_BONUS)
	@$(LIBC) $(NAME) $(OBJ) $(OBJ_BONUS)
	@touch $@
	@echo "$(GREEN)Library $(NAME) (with bonus) created.$(RESET)"

# Clean rule
clean:
	@$(RM_FILE) $(OBJ) $(OBJ_BONUS)
	@$(RM_FILE) $(DEP) $(DEP_BONUS)
	@$(RM_DIR)  $(OBJ_DIR)
	@echo "$(YELLOW)Object files and dependencies removed.$(RESET)"

# Fclean rule
fclean:	clean
	@$(RM_FILE) $(NAME)
	@$(RM_FILE) .bonus
	@echo "$(YELLOW)Library $(NAME) removed.$(RESET)"

# Re rule
re:	fclean all

# Rebonus rule
rebonus: fclean bonus

# Include dependency files
-include $(DEP) $(DEP_BONUS)

.PHONY: all bonus clean fclean re rebonus