CFLAGS = -O3 -Wall -std=c++11
CFLAGS = -g -Wall -std=c++11

Run: waveform_main.o waveform.o
	g++ -o $@ waveform_main.o waveform.o $(CFLAGS)

waveform_main.o: waveform_main.cpp waveform.h
	g++ -c waveform_main.cpp $(CFLAGS)

waveform.o: waveform.cpp waveform.h
	g++ -c waveform.cpp $(CFLAGS)

clean:
	rm -f Run *.o