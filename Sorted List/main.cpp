#include <iostream>
#include "sortedtype.cpp"

using namespace std;

int main()
{
    SortedType myList;

    cout << myList.LengthIs() << endl;

    ItemType item;

    for(int i = 1; i <= 5; i++){
        int x;
        cin >> x;
        item.initialize(x);
        myList.InsertItem(item);
    }

    myList.PrintList();

    cout << endl;

    bool found = false;

    item.initialize(6);

    myList.RetrieveItem(item, found);

    if(found){
        cout << "Item found" << endl;
    }else {
        cout << "Item not Found" << endl;
    }

    found = false;

    item.initialize(5);

    myList.RetrieveItem(item, found);

    if(found){
        cout << "Item found" << endl;
    }else {
        cout << "Item not Found" << endl;
    }

    if(myList.IsFull()){
        cout << "List is full" << endl;
    }else {
        cout << "List is not full" << endl;
    }

    item.initialize(1);
    myList.DeleteItem(item);

    myList.PrintList();
    cout << endl;

    if(myList.IsFull()){
        cout << "List is full" << endl;
    }else {
        cout << "List is not full" << endl;
    }

    return 0;
}
