CC   = gcc
OBJS = $(patsubst %.c,bin/%,$(wildcard *.c))

all: $(OBJS)

$(OBJS):
	$(CC) -o ./$@ $(patsubst bin/%,%.c,$@)

clean:
	$(RM) ./bin/*
