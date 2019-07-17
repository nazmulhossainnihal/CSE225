#ifndef ITEMTYPE_H_INCLUDED
#define ITEMTYPE_H_INCLUDED
#include<cstring>
#include<iostream>

using namespace std;

const char null = '\0';
const int MAX_ITEMS = 5;

enum RelationType {LESS, GREATER, EQUAL};

class ItemType
{
public:
    ItemType();
    RelationType ComparedTo(ItemType);
    void print();
    void initialize(int);
    int getData();
private:
    int value;
};


#endif // ITEMTYPE_H_INCLUDED
