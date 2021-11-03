all: hello

hello: 01-hello-world.c
	gcc -o ./bin/01-helloworld 01-hello-world.c
