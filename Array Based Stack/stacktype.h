#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

#include "itemtype.cpp"

class FullStack{};
class EmptyStack{};

class StackType{
public:
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    void Print();
private:
    int top;
    ItemType items[MAX_ITEMS];
};

#endif // STACKTYPE_H_INCLUDED
