CXXFLAGS= -g -std=c++11 -Wall -Werror 
CXX=g++

app:node.o list.o 
	$(CXX) $(CXXFLAGS) $^ main.cpp -o $@

clean:
	rm -f *.o
	rm app
