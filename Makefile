CC = g++ # GNU compiler

# All objects are linked together
all: A_tri.o main.o
	$(CC) main.o A_tri.o -o GeoMachine

# Compile and produce the main object file
main.o: main.cpp
	$(CC) -c main.cpp

# Compile and produce the A_tri object file
A_tri.o: A_tri.cpp
	$(CC) -c A_tri.cpp
