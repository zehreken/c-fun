CC = gcc
CFLAGS = -I/usr/local/include
LDFLAGS = -L/usr/local/lib -lraylib -framework OpenGL -framework OpenAL -framework IOKit -framework CoreVideo -framework Cocoa

SRCS = pointer_fun.c bitwise_fun.c bitwise_utils.c float_fun.c time_utils.c array_fun.c main.c
TARGET = ../program.o

build: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET) $(LDFLAGS)