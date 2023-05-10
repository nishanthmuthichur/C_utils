CC = gcc
LFLAGS = -g -Wall
RFLAGS = -I.

TARGET = mem_test

DEPS = mem_test.o memutils.o

$(TARGET): $(DEPS)
	$(CC) -o $(TARGET) $(DEPS)

mem_test.o: mem_test.c
	$(CC) $(LFLAGS) -c mem_test.c $(RFLAGS)

memutils.o: memutils.c
	$(CC) $(LFLAGS) -c memutils.c $(RFLAGS)

clean:
	rm -rf *.o
	rm -rf $(TARGET)
