#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main(void)
{
    LinkedList myList;
    int x;
    for(int i = 1; i <= 5; i++){
        cin >> x;
        myList.insert(x);
    }

    myList.displayList();

    myList.Delete(105);

    cout << endl;

    myList.displayList();

    cout << endl;

    if(myList.RetriveValue(105)) {
        cout << "105 Found" << endl;
    } else {
        cout << "105 Not Found" << endl;
    }

    myList.~LinkedList();

    myList.displayList();

    cout << endl;

    cout << myList.isempty() << endl;

    return 0;
}
