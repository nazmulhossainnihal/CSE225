#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
#include "itemtype.cpp"

class SortedType
{
public:
    SortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void ResetList();
    void GetNextItem(ItemType&);
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void PrintList();
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};


#endif // SORTEDTYPE_H_INCLUDED

