NAME = qvmd
CC = gcc
CCFLAGS = -Wall -Werror -Wextra

SRC = src/qvmd.c \
      src/decompile.c \
      src/disassemble.c \
      src/file.c \
      src/functions.c \
      src/jumppoints.c \
      src/map.c \
      src/opblocks.c \
      src/opcodes.c \
      src/options.c \
      src/qvm.c \
      src/sections.c \
      src/strings.c \
      src/types.c \
      src/variables.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) $(CCFLAGS) -o $(NAME)
	@echo "QVMd Compiled!"

%.o: %.c
	@$(CC) -c -o $@ $< $(CCFLAGS)

re: clean all

clean:
	@rm -f $(NAME) $(OBJ)
	@echo "QVMd Cleaned!"
