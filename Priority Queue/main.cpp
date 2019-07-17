#include <iostream>
#include "pqtype.cpp"
using namespace std;

int main()
{
    PQType<int> myQue(10);

    int x;
    for(int i = 1; i <= 10; i++){
        cin >> x;
        myQue.Enqueue(x);
    }

    myQue.PrintQueue();
    cout << endl;

    myQue.Dequeue(x);
    cout << x << endl;

    myQue.Dequeue(x);
    cout << x << endl;

    myQue.PrintQueue();
    cout << endl;

    myQue.Dequeue(x);
    myQue.Dequeue(x);
    myQue.Dequeue(x);

    myQue.PrintQueue();
    cout << endl;

    return 0;
}
