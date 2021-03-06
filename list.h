#ifndef LIST_H
#define LIST_H
#include "node.h"

#include <iostream>

template <typename T>
class List{

    public:
        List();
        ~List();

        void insert_back(const T& data);
        void insert_front(const T& data);
        bool remove_front();
        bool remove_back();
        bool isEmpty() const;
        virtual void print() const;
    private:
        Node<T> *firstNode;
        Node<T> *lastNode;

        Node<T> *createNodeFromData(const T& data);
        bool empty() const;
};


template <typename T>
List<T>::List() :firstNode(nullptr), lastNode(nullptr) { }

template <typename T>
List<T>::~List() { }

template <typename T>
void List<T>::insert_front(const T& data) 
{
    auto node = createNodeFromData(data);

    if(empty())
    {
        firstNode = node;
        lastNode = node;
        return;
    }

    node->nextNode = firstNode;
    firstNode = node;
}

template <typename T>
void List<T>::insert_back(const T& data)
{
    auto node = createNodeFromData(data);
    node->nextNode = nullptr;

    if(empty())
    {
        firstNode = node;
        lastNode = node;
        return;
    }

    lastNode->nextNode = node;
    lastNode = node;
}

template <typename T>
bool List<T>::remove_front()
{
    if(empty())
        return false;

    auto temp = firstNode;
    
    firstNode = firstNode->nextNode;

    delete temp;

    return true;
}

template <typename T>
bool List<T>::remove_back()
{
    if(empty())
        return false;

    auto currentNode = firstNode;

    while(currentNode->nextNode != lastNode)
    {
        currentNode = currentNode->nextNode;
    }//seek till the last node (lastNode)


    lastNode = currentNode;
    lastNode->nextNode = nullptr;

    delete currentNode->nextNode;

    return true; 
}


template <typename T>
Node<T> *List<T>::createNodeFromData(const T& data)
{
    return new Node<T>(data);
}

template <typename T>
bool List<T>::empty() const { return firstNode == nullptr; }

template <typename T> 
bool List<T>::isEmpty() const { return empty(); }

template <typename T>
void List<T>::print() const 
{
    if(empty())
    {
        std::cout << "Empty !!!\n\n";
        return;
    }
    
    auto currentNode = firstNode;

    while(currentNode != nullptr)
    {
        std::cout << currentNode->getData() << " ";
        currentNode = currentNode->nextNode;
    }

    std::cout << "\n\n";
}
#endif //LIST_H
