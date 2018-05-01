all: main.o
	g++ main.o

main.o: main.cpp
	g++ -c main.cpp

doc:
	doxygen

check:
	cppcheck main.cpp
	g++ -g main.cpp
	valgrind ./a.out
