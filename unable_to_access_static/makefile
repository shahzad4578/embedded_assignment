CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99

SRCS = main.c math.c
OBJS = $(SRCS:.c=.o)
TARGET = main

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
