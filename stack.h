#ifndef STACK_H
#define STACK_K

#include "list.h"

template <typename T>
class Stack : private List<T>
{

    public:
        Stack();
        Stack(const T& data);

        bool pop();
        void push(const T& data);
        void print() const override;
};

template <typename T>
Stack<T>::Stack() { }

template <typename T>
Stack<T>::Stack(const T& data)
{
    
}

template <typename T>
bool Stack<T>::pop()
{
    return this->remove_front();
}

template <typename T>
void Stack<T>::push(const T& value)
{
    this->insert_front(value);
}

template <typename T>
void Stack<T>::print() const 
{
    List<T>::print();
}

#endif //STACK_H
