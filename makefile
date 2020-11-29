# All Targets
all: main

# Tool invocations
# Executable "hello" depends on the files hello.o and run.o.
main: bin/main.o bin/Sort_Algo.o
	g++ -o bin/main bin/main.o bin/Sort_Algo.o


# Depends on the source and header files
bin/main.o: src/main.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/main.o src/main.cpp

# Depends on the source and header files
bin/Sort_Algo.o: src/Sort_Algo.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/Sort_Algo.o src/Sort_Algo.cpp

#Clean the build directory
clean:
	rm -f bin/.o