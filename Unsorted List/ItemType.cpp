#include "ItemType.h"
#include <iostream>

using namespace std;

ItemType::ItemType()
{
    value = 0;
}

RelationType ItemType::comparedTo(ItemType item)
{
    if (value < item.value)
        return LESS;
    else if (value > item.value)
        return GREATER;
    else
        return EQUAL;
}

void ItemType::print()
{
    cout << value << " ";
}

void ItemType::initialise(int number)
{
    value = number;
}
