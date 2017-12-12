#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"

template <typename T>
class Queue : private List<T>
{
    public:
        Queue() {};
        
        void enqueue(const T& value)
        {
            this->insert_back(value);
        }

        bool dequeue()
        {
            return this->remove_front();
        }

        void print() const override 
        {
            List<T>::print();
        }
};

#endif //QUEUE_H
