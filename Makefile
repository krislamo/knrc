CC   = gcc
OBJS = $(patsubst %.c,bin/%,$(wildcard *.c))

all: $(OBJS)

$(OBJS):
	$(CC) -o ./$@ $(patsubst bin/%,%.c,$@) -ansi

clean:
	$(RM) ./bin/*
