main: main.c methods.c methods.h
	gcc -Wall -g -o main main.c methods.c methods.h

.PHONY: clean 
	rm main