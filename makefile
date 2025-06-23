CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99

SRCS = nfile.c
OBJS = $(SRCS:.c=.o)
TARGET = nfile

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
