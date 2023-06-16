CC = gcc
CFLAGS = -Wall -Wextra -pedantic

TARGET = directory_traversal
SRC = directory_traversal.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
