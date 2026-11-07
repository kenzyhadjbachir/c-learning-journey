CC      = gcc
CFLAGS  = -Wall -Wextra -std=c11
TARGET  = hello

all: $(TARGET)

$(TARGET): hello.c
	$(CC) $(CFLAGS) -o $(TARGET) hello.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean
