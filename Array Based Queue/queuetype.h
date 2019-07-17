#ifndef QUEUETYPE_H_INCLUDED
#define QUEUETYPE_H_INCLUDED
#include<iostream>

class FullQueue
{};

class EmptyQueue
{};

template<class ItemType>
class QueType{
public:
    QueType(int);
    ~QueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue();
    ItemType Peak();
private:
    int front;
    int rear;
    ItemType* info;
    int maxQue;
};

#endif // QUEUETYPE_H_INCLUDED
