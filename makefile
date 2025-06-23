CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99

SRCS = unsign_vs_sign.c
OBJS = $(SRCS:.c=.o)
TARGET = unsign_vs_sign

.PHONY: all clean

all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)
