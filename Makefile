compile:
	g++ -I/usr/include/SDL2/ -lSDL2 -o bin/model.o src/main.cpp

run:
	bin/model.o
