# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
OBJ_DIR = $(SRC_DIR)
INCLUDE_DIR = includes
LIB_NAME = libft.a

# Source and object files
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Default rule
all: $(LIB_NAME)

# Rule to create the library
$(LIB_NAME): $(OBJ)
	@echo "Creating $@"
	ar rcs $@ $(OBJ)
	@echo "Library created: $@"

# Rule to compile object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Clean rule to remove object files
clean:
	@echo "Cleaning object files"
	rm -f $(OBJ)

# Fclean rule to remove object files and library
fclean: clean
	@echo "Removing library"
	rm -f $(LIB_NAME)

# Re rule to clean and then build
re: fclean all
	@echo "Rebuild complete"

# Phony targets
.PHONY: all clean fclean re
