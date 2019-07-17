#include <iostream>
#include "quetype.cpp"

using namespace std;

int main(void)
{
    QueType<int> myQue;

    if(myQue.IsEmpty()){
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Queue is not Empty" << endl;
    }

    int x;

    for(int i = 1; i <= 4; i++){
        cin >> x;
        myQue.Enqueue(x);
    }

    if(myQue.IsEmpty()){
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Queue is not Empty" << endl;
    }

    if(myQue.IsFull()){
        cout << "Queue is Full" << endl;
    } else {
        cout << "Queue is not Full" << endl;
    }

    cin >> x;
    myQue.Enqueue(x);

    int L = myQue.Length();

    for(int i = 1; i <= L; i++){
        myQue.Dequeue(x);
        cout << x << " ";
        myQue.Enqueue(x);
    }

    cout << endl;

    if(myQue.IsFull()){
        cout << "Queue is Full" << endl;
    } else {
        cout << "Queue is not Full" << endl;
    }

    cin >> x;
    myQue.Enqueue(x);

    myQue.Dequeue(x);
    myQue.Dequeue(x);

    myQue.Dequeue(x);

    L = myQue.Length();

    for(int i = 1; i <= L; i++){
        myQue.Dequeue(x);
        cout << x << " ";
        myQue.Enqueue(x);
    }

    cout << endl;

    myQue.Dequeue(x);
    myQue.Dequeue(x);
    myQue.Dequeue(x);

    if(myQue.IsEmpty()){
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Queue is not Empty" << endl;
    }

    try {
        myQue.Dequeue(x);
    } catch(...){
        cout << "Queue underflow" << endl;
    }

    return 0;
}
