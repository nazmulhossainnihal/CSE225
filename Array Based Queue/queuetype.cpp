#include"queuetype.h"

using namespace std;

template<class ItemType>
QueType<ItemType>::QueType(int max)
{
    maxQue = max;
    front = -1;
    rear = -1;
    info = new ItemType[maxQue];
}

template<class ItemType>
QueType<ItemType>::~QueType()
{
    delete[] info;
}

template<class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    front = -1;
    rear = -1;
}

template<class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (front == -1);
}

template<class ItemType>
bool QueType<ItemType>::IsFull()
{
    return ((rear+1) % maxQue == front);
}

template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType i)
{
    if(IsFull()){
        throw FullQueue();
    } else {
        rear = (rear+1) % maxQue;
        info[rear] = i;
        if(front == -1){
            front = 0;
        }
    }
}

template<class ItemType>
void QueType<ItemType>::Dequeue()
{
    if(front == -1){
        cout << "Queue is Empty" << endl;
    }

    if(front == rear){
        MakeEmpty();
    } else {
        front = (front + 1) % maxQue;
    }

}

template<class ItemType>
ItemType QueType<ItemType>::Peak()
{
    return info[front];
}
