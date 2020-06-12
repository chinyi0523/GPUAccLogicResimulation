CFLAGS = -O3 -std=c++11
CFLAGS = -g -std=c++11

#Sim: main.o waveform.o
#	g++ -o $@ main.o waveform.o $(CFLAGS)

Sim: main.o waveform.o
	g++ -o $@ main.o waveform.o $(CFLAGS)
main.o: main.cpp lib.h waveform.h gate.h
	g++ -c main.cpp $(CFLAGS)	
waveform.o: waveform.cpp waveform.h
	g++ -c waveform.cpp $(CFLAGS)

clean:
	rm -f Sim *.o


