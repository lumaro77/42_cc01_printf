# Name of the library
NAME = libftprintf.a

# Name of the directories
SRC_DIR		= src
INCLUDE_DIR	= include
LIBS_DIR 	= libft
OBJ_DIR		= obj

# Include files
LIBS			= $(LIBS_DIR)/libft.a
LIBS_HEADERS	= -I $(LIBS_DIR)/include/ 
INC				= -I $(INCLUDE_DIR) $(LIBS_HEADERS)

# Source files
SRC	= ft_printf.c ft_printf_aux.c

# Object files
OBJ	= $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

# Dependency files
DEP	= $(addsuffix .d, $(basename $(OBJ)))


# Compiler and flags
COMPILE	= cc -c
CFLAGS	= -Wall -Werror -Wextra -MMD -MP -O3 $(INC)

# Archiver
LIBC = ar -rcs

# Create directories
MKDIR	= mkdir -p

# Copy files
CP = cp -f 

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
all: make_libs $(NAME)

# Build libft rule
make_libs:
	@make -s -C $(LIBS_DIR) bonus

# Build rule
$(NAME): $(OBJ) $(LIBS)
	@$(CP) $(LIBS) ./$(NAME)
	@$(LIBC) $(NAME) $(OBJ)
	@echo "$(GREEN)Library $(NAME) created.$(RESET)"

# Clean rule
clean:
	@make clean -s -C $(LIBS_DIR)
	@$(RM_FILE) $(OBJ)
	@$(RM_FILE) $(DEPS)
	@$(RM_DIR)  $(OBJ_DIR)
	@echo "$(YELLOW)Object files and dependencies removed.$(RESET)"

# Fclean rule
fclean: clean
	@make fclean -s -C $(LIBS_DIR)
	@$(RM_FILE) $(NAME)
	@echo "$(YELLOW)Library $(NAME) removed.$(RESET)"

# Re rule
re:	fclean all

# Include dependencies files
-include $(DEP) 

.PHONY:	all clean fclean re make_libs
