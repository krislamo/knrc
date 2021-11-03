all: hello mathvars

hello: 01-hello-world.c
	gcc -o ./bin/01-helloworld 01-hello-world.c

mathvars: 02-vars-and-math.c
	gcc -o ./bin/02-mathvars 02-vars-and-math.c

clean:
	$(RM) ./bin/*-*
