#include <iostream>
#include "stacktype.cpp"

using namespace std;
int sumOdd(StackType s);
int sumPrime(StackType s);

int main(void)
{
    StackType myStack;
    ItemType item;
    int x;

    if(myStack.IsEmpty()){
        cout << "Stack is Empty" << endl;
    } else {
        cout << "Stack is not Empty" << endl;
    }

    for(int i = 1; i <= 4; i++){
        cin >> x;
        item.Initialize(x);
        myStack.Push(item);
    }


    if(myStack.IsEmpty()){
        cout << "Stack is Empty" << endl;
    } else {
        cout << "Stack is not Empty" << endl;
    }

    if(myStack.IsFull()){
        cout << "Stack is full" << endl;
    } else {
        cout << "Stack is not full" << endl;
    }

    myStack.Print();
    cout << endl;

    cin >> x;
    item.Initialize(x);
    myStack.Push(item);

    myStack.Print();
    cout << endl;

    if(myStack.IsFull()){
        cout << "Stack is full" << endl;
    } else {
        cout << "Stack is not full" << endl;
    }

    myStack.Pop();
    myStack.Pop();

    myStack.Top().Print();
    cout << endl;

    cout << sumOdd(myStack);
    cout << endl;

    cout << sumPrime(myStack);
    cout << endl;

    myStack.Print();
    cout << endl;

    return 0;
}

int sumOdd(StackType s)
{
    int sum = 0;
    while(!s.IsEmpty()){
        if(s.Top().GetValue() % 2 != 0){
            sum += s.Top().GetValue();
        }
        s.Pop();
    }

    return sum;
}

int sumPrime(StackType s)
{
    int sum = 0;
    while(!s.IsEmpty()){
        bool prime = true;

        for(int i = 2; i <= s.Top().GetValue()/2; i++){
            if(s.Top().GetValue() % i == 0){
                prime = false;
            }
        }

        if(s.Top().GetValue() == 1){
            prime = false;
        }

        if(prime == true){
            sum +=  s.Top().GetValue();
        }

        s.Pop();
    }

    return sum;
}
