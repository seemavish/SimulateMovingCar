CC = g++
CFLAGS = -Wall -g

main.exe: main.o carSimulation.o 
	$(CC) $(CFLAGS) -o main.exe main.o carSimulation.o 

main.o: main.cpp 
	$(CC) $(CFLAGS) -c main.cpp

carSimulation.o: carSimulation.cpp
	$(CC) $(CFLAGS) -c carSimulation.cpp 

clean:
	rm -f *.o main.exe *.gch