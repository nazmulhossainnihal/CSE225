#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include "ListNode.h"

class LinkedList{
private:
    ListNode *head;
public:
    LinkedList();
    ~LinkedList();
    bool isempty();
    void insert(int);
    void Delete(int);
    void MakeListEmpty();
    bool RetriveValue(int);
    void displayList();
};


#endif // LINKEDLIST_H_INCLUDED
