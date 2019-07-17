#include "stacktype.h"

StackType::StackType()
{
    top = -1;
}

bool StackType::IsEmpty()
{
    return (top == -1);
}


bool StackType::IsFull()
{
    return(top == MAX_ITEMS - 1);
}


void StackType::Push(ItemType item)
{
    if(IsFull()){
        throw FullStack();
    }
    top++;
    items[top] = item;

}

void StackType::Pop()
{
    if(IsEmpty()) {
        throw EmptyStack();
    }

    top--;
}

ItemType StackType::Top()
{
    return items[top];
}

void StackType::Print()
{
    StackType tempStack;
    while(!IsEmpty()){
        Top().Print();
        tempStack.Push(Top());
        Pop();
    }

    while(!tempStack.IsEmpty()){
        Push(tempStack.Top());
        tempStack.Pop();
    }
}
