#include <iostream>
#include "queuetype.cpp"

using namespace std;

int main(void)
{
    QueType<int> myQueue(5);

    if(myQueue.IsEmpty()){
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Queue is not Empty" << endl;
    }

    int x;
    for(int i = 1; i <= 3; i++){
        cin >> x;
        myQueue.Enqueue(x);
    }

    QueType<int> tempQueue(5);

    while(!myQueue.IsEmpty()){
        tempQueue.Enqueue(myQueue.Peak());
        cout << myQueue.Peak() << " ";
        myQueue.Dequeue();
    }

    while(!tempQueue.IsEmpty()){
        myQueue.Enqueue(tempQueue.Peak());
        tempQueue.Dequeue();
    }

    cout << endl;

    for(int i = 1; i <= 2; i++){
        cin >> x;
        myQueue.Enqueue(x);
    }

    if(myQueue.IsFull()){
        cout << "Queue is Full" << endl;
    } else {
        cout << "Queue is not Full" << endl;
    }

    while(!myQueue.IsEmpty()){
        tempQueue.Enqueue(myQueue.Peak());
        cout << myQueue.Peak() << " ";
        myQueue.Dequeue();
    }

    while(!tempQueue.IsEmpty()){
        myQueue.Enqueue(tempQueue.Peak());
        tempQueue.Dequeue();
    }

    cout << endl;

    myQueue.Dequeue();
    myQueue.Dequeue();

    while(!myQueue.IsEmpty()){
        tempQueue.Enqueue(myQueue.Peak());
        cout << myQueue.Peak() << " ";
        myQueue.Dequeue();
    }

    while(!tempQueue.IsEmpty()){
        myQueue.Enqueue(tempQueue.Peak());
        tempQueue.Dequeue();
    }

    cout << endl;

    myQueue.MakeEmpty();

    if(myQueue.IsEmpty()){
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Queue is not Empty" << endl;
    }

    return 0;
}
