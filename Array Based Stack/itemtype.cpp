#include "itemtype.h"
#include <iostream>

using namespace std;

ItemType::ItemType()
{
    value = 0;
}

RelationType ItemType::ComparedTo(ItemType item)
{
    if (value < item.GetValue())
        return LESS;
    else if (value > item.GetValue())
        return GREATER;
    else
        return EQUAL;
}

void ItemType::Print()
{
    cout << value << " ";
}

int ItemType::GetValue()
{
    return value;
}

void ItemType::Initialize(int number)
{
    value = number;
}
