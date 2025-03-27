CC := gcc

CFLAGS := -Wall -g

football.exe: football.o football_main.o
	$(CC) $(CFLAGS) -o $@ $^

temperature.exe: temperature.o temperature_main.o
	$(CC) $(CFLAGS) -o $@ $^

football.o: football.c report.h
	$(CC) $(CFLAGS) -c football.c

football_main.o: football_main.c report.h
	$(CC) $(CFLAGS) -c football_main.c

temperature.o: temperature.c report.h
	$(CC) $(CFLAGS) -c temperature.c

temperature_main.o: temperature_main.c report.h
	$(CC) $(CFLAGS) -c temperature_main.c

clean:
	rm -f *.o football.exe temperature.exe
