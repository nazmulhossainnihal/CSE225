#include "UnsortedType.h"

UnsortedType::UnsortedType()
{
    length = 0;
    currentPos = -1;
}

void UnsortedType::makeEmpty()
{
    length = 0;
}

bool UnsortedType::isFull()
{
    return (length == MAX_ITEMS);
}

int UnsortedType::lengthIs()
{
    return length;
}

void UnsortedType::resetList()
{
    currentPos = -1;
}

void UnsortedType::getNextItem(ItemType& item)
{
    currentPos++;
    item = info[currentPos];
}

void UnsortedType::insertItem(ItemType item)
{
    info[length] = item;
    length++;
}

void UnsortedType::deleteItem(ItemType item)
{
    int location = 0;
    while (item.comparedTo(info[location]) != EQUAL)
        location++;
    info[location] = info[length - 1];
    length--; 
}

void UnsortedType::retrieveItem(ItemType& item, bool& found) //Copies anotherItem's location to item so anotherItem can be changed.
{
    int location = 0;
    bool moreToSearch = (location < length);
    found = false;
    while (moreToSearch && !found)
    {
        switch (item.comparedTo(info[location]))
        {
            case LESS:
            case GREATER:
                location++;
                moreToSearch = (location < length);
                break;
            case EQUAL:
                found = true;
                item = info[location];
        }
    }
}

void UnsortedType::printList()
{
    for (int location = 0; location < length; location++)
    {
        info[location].print();
    }
}