#ifndef QUEUE_H
#define QUEUE_H

#include "DLList.h"
#include "DLLNode.h"
template <typename T>
class Queue {
    public:
    Queue();
    Queue(const Queue<T> & other);
    ~Queue();
    Queue<T>& operator=(const Queue<T> & other);
    // unsigned size() const;
    bool empty() const;
    void enqueue(const T& val);
    void dequeue();
    void print() const;
    // bool full() const;
    void clear();
    const T& front() const;
    private:
    DLList<T>* data;


};

#endif