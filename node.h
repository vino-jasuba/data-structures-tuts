#ifndef NODE_H
#define NODE_H

#include <iostream>

template <typename T> class List;

template <typename T>
class Node{
    
    friend class List<T>;
    
    public:
        explicit Node() { }
        explicit Node(const T&);
        T getData() const;
        void setData(const T& data);

    private:
        T data;
        Node<T> *nextNode;
};


template <typename T>
Node<T>::Node(const T& node) 
    : data(node), nextNode(nullptr) 
{

}

template <typename T>
void Node<T>::setData(const T& data)
{
    this->data = data;
}

template <typename T>
T Node<T>::getData() const { return data; }


#endif //NODE_H
