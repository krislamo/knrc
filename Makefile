all: hello mathvars c2f input count countlines blanks unambiguous

hello: 01-hello-world.c
	gcc -o ./bin/01-helloworld 01-hello-world.c

mathvars: 02-vars-and-math.c
	gcc -o ./bin/02-mathvars 02-vars-and-math.c

c2f: 03-celsius-to-fahrenheit.c
	gcc -o ./bin/03-c2f 03-celsius-to-fahrenheit.c

input: 04-file-copying.c
	gcc -o ./bin/04-input 04-file-copying.c

count: 05-char-counting.c
	gcc -o ./bin/05-count 05-char-counting.c

countlines: 06-line-count.c
	gcc -o ./bin/06-line-count 06-line-count.c

blanks: 07-extra-blanks.c
	gcc -o ./bin/07-extra-blanks 07-extra-blanks.c

unambiguous: 08-unambiguous.c
	gcc -o ./bin/08-unambiguous 08-unambiguous.c

clean:
	$(RM) ./bin/*-*
