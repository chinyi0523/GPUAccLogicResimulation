CFLAGS = -O3 -Wall -std=c++11
CFLAGS = -g -Wall -std=c++11

all : lib
	@echo -n ""

lib : main.cpp lib.h
	g++ -O3 main.cpp -o lib

clean:
	rm -f *.o lib

