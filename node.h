#ifndef NODE_H
#define NODE_H

#include <iostream>

template <typename T> class List;

template <typename T>
class Node{
    
    friend class List<T>;
    
    public:
        explicit Node() { std::cout << "Node() called" << std::endl; }
        explicit Node(const T&);
        T getData() const;
        void setData(const T& data);

    private:
        T data;
        Node<T> *nextNode;
};


#include "node_impl.h"
#endif //NODE_H
