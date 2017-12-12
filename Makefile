CXXFLAGS= -g -std=c++11 -Wall -Werror 
CXX=g++

app:node.o list.o 

clean:
	rm -f *.o
