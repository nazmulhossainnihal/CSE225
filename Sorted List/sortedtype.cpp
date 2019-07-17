#include "sortedtype.h"

SortedType::SortedType()
{
    length = 0;
    currentPos = -1;
}

void SortedType::MakeEmpty()
{
    length = 0;
}

bool SortedType::IsFull()
{
    return (length == MAX_ITEMS);
}

int SortedType::LengthIs()
{
    return length;
}

void SortedType::ResetList()
{
    currentPos = -1;
}

void SortedType::GetNextItem(ItemType& item)
{
    currentPos++;
    item = info[currentPos];
}

void SortedType::InsertItem(ItemType item)
{
    int location = 0;
    bool moreToSearch = (location < length);

    while(moreToSearch){
        switch(item.ComparedTo(info[location])){
            case GREATER:
                location++;
                moreToSearch = (location < length);
                break;
            case LESS:
                moreToSearch = false;
                break;
        }
    }
    for(int index = length; index > location; index--){
        info[index] = info[index - 1];
    }
    info[location] = item;
    length++;
}

void SortedType::DeleteItem(ItemType item)
{
    int location = 0;
    while(item.ComparedTo(info[location]) != EQUAL){
        location++;
    }

    for(int index = location + 1; index < length; index++){
        info[index - 1] = info[index];
    }

    length--;
}

void SortedType::RetrieveItem(ItemType& item, bool& found)
{
    int midPoint;
    int first = 0;
    int last = length - 1;
    bool moreToSearch = first <= last;
    found = false;
    while(moreToSearch && !found){
        midPoint = (first + last)/2;
        switch(item.ComparedTo(info[midPoint])){
            case LESS:
                last = midPoint -1;
                moreToSearch = first <= last;
                break;
            case GREATER:
                first = midPoint + 1;
                moreToSearch = first <= last;
                break;
            case EQUAL:
                found = true;
                item = info[midPoint];
                break;
        }
    }
}

void SortedType::PrintList()
{
    for (int location = 0; location < length; location++)
    {
        info[location].print();
    }
}

