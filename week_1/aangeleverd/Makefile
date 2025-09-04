# Compiler
CC = cc
# Compiler flags (add warnings and debug info)
CFLAGS = -Wall -Wextra -g
# Libraries to link
LDLIBS = -lm

# Target
char: char.c
	$(CC) $(CFLAGS) char.c -o char $(LDLIBS)

# Clean up build files
clean:
	rm -f char
