CC = gcc
CFLAGS = -I.

TARGET = mem_test

DEPS = mem_test.o memutils.o

$(TARGET): $(DEPS)
	$(CC) -o $(TARGET) $(DEPS)

mem_test.o: mem_test.c
	$(CC) -c mem_test.c $(CFLAGS)

memutils.o: memutils.c
	$(CC) -c memutils.c $(CFLAGS)
