#include "itemtype.h"

using namespace std;

ItemType::ItemType()
{
    value = 0;
}

RelationType ItemType::ComparedTo(ItemType item)
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

void ItemType::initialize(int number)
{
    value = number;
}

int ItemType::getData()
{
    return value;
}
