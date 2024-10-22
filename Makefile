CC = gcc

CFLAGS = -Wall -Wextra -O2

LDFLAGS = -lraylib

SRCS = main.c camera.c

OBJS = $(SRCS:.c=.o)

TARGET = main 

# Default target
all: $(TARGET)

# Rule to link the object files into the final executable
$(TARGET): $(OBJS)
	$(CC)  -o $@ $(OBJS) $(LDFLAGS)

# Rule to compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
