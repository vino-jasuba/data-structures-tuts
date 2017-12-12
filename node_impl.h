#include "node.h"



template <typename T>
Node<T>::Node(const T& node) 
    : data(node), nextNode(nullptr) 
{
    std::cout << "Node(const T& ) called" << std::endl;    
}

template <typename T>
void Node<T>::setData(const T& data)
{
    this->data = data;
}

template <typename T>
T Node<T>::getData() const { return data; }


