#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include "ItemType.cpp"

class UnsortedType
{
public:
    UnsortedType();
    void makeEmpty();
    bool isFull();
    int lengthIs();
    void resetList();
    void getNextItem(ItemType&);
    void insertItem(ItemType);
    void deleteItem(ItemType);
    void retrieveItem(ItemType&, bool&);
    void printList();
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};


#endif // UNSORTEDTYPE_H_INCLUDED
