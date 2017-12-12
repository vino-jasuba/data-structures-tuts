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

#include "list_impl.h"

#endif //LIST_H
