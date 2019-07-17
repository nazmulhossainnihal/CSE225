#include <iostream>
#include "UnsortedType.cpp"

using namespace std;

int main()
{
    UnsortedType uList;
    ItemType item;
    int value = 0;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter no." << i + 1 << " value to insert in the list: ";
        cin >> value;
        item.initialise(value);
        uList.insertItem(item);
    }

    cout << "Elements in the list: ";
    uList.printList();
    cout << endl;
    cout << "Length of the list: " << uList.lengthIs() << endl;
    
    cout << "Enter a value to insert in the list: ";
    cin >> value;
    item.initialise(value);
    uList.insertItem(item);

    cout << "Elements in the list: ";
    uList.printList();
    cout << endl;

    bool found;
    int valuesToRetrieve[4] = {4, 5, 9, 10};
    ItemType itemToRetrieve;
    for (int i = 0; i < 4; i++)
    {
        cout << "Searching for " << valuesToRetrieve[i] << ": ";
        itemToRetrieve.initialise(valuesToRetrieve[i]);
        uList.retrieveItem(itemToRetrieve, found);
        if (found)
            cout << "Item is found" << endl;
        else
            cout << "Item is not found" << endl;
    }

    ItemType itemToDelete;
    cout << "Check if list is full: ";
    if (uList.isFull())
        cout << "List is full." << endl;
    else
        cout << "List is not full." << endl;

    itemToDelete.initialise(5);
    cout << "Deleting " << 5 << " from list." << endl;
    uList.deleteItem(itemToDelete);
    cout << "Check if list is full: ";
    if (uList.isFull())
        cout << "List is full." << endl;
    else
        cout << "List is not full." << endl;

    cout << "Elements in the list: ";
    uList.printList();
    cout << endl;

    int valuesToDelete[2] = {1, 6};
    for (int i = 0; i < 2; i++)
    {
        cout << "Deleting " << valuesToDelete[i] << " from list." << endl;
        itemToDelete.initialise(valuesToDelete[i]);
        uList.deleteItem(itemToDelete);
        cout << "Elements in the list: ";
        uList.printList();
        cout << endl;
    }

    /*     cout << "Deleting " << 6 << " from list." << endl;
    UnsortedType tempList;
    itemToDelete.initialise(6);
    ItemType temp;
    for (int i = 0; i < uList.lengthIs(); i++)
    {
        uList.getNextItem(temp);
        if (temp.comparedTo(itemToDelete) != EQUAL)
            tempList.insertItem(temp); 
    }
    uList.makeEmpty();
    for (int i = 0; i < tempList.lengthIs(); i++)
    {
        tempList.getNextItem(temp);
        uList.insertItem(temp);
    }
    cout << "Elements in the list: ";
    uList.printList();
    cout << endl; */

    return 0;
}
