CXXFLAGS= -g -std=c++11 -Wall -Werror 
CXX=g++
INCLUDES=tree.h tree_node.h stack.h list.h node.h

app:node.o list.o $(INCLUDES)
	$(CXX) $(CXXFLAGS) $^ main.cpp -o $@

clean:
	rm -f *.o
