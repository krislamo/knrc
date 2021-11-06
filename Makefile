all: hello mathvars c2f input

hello: 01-hello-world.c
	gcc -o ./bin/01-helloworld 01-hello-world.c

mathvars: 02-vars-and-math.c
	gcc -o ./bin/02-mathvars 02-vars-and-math.c

c2f: 03-celsius-to-fahrenheit.c
	gcc -o ./bin/03-c2f 03-celsius-to-fahrenheit.c

input: 04-file-copying.c
	gcc -o ./bin/04-input 04-file-copying.c

clean:
	$(RM) ./bin/*-*
