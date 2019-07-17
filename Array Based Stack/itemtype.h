#ifndef ITEMTYPE_H_INCLUDED
#define ITEMTYPE_H_INCLUDED

const char MAX_ITEMS = 5;

enum RelationType {LESS, GREATER, EQUAL};

class ItemType
{
public:
    ItemType();
    RelationType ComparedTo(ItemType);
    void Print();
    int GetValue();
    void Initialize(int);
private:
    int value;
};


#endif // ITEMTYPE_H_INCLUDED
